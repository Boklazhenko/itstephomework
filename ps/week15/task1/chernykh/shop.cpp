#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include "shop.h"
#include <string>

int getSectionsCount(const Shop* const shop)
{
	return shop->pSections->Size;
}

int getProductsCount(const Shop* const shop, const char* category)
{
	int size = getSectionsCount(shop);

	for (int i = 0; i < size; ++i)
	{
		if (strcmp(shop->pSections->Data[i]->Category, category) == 0)
		{
			return shop->pSections->Data[i]->pProducts->Size;
		}
	}

	return 0;
}

char* copyStr(const char* source)
{
	int strSize = strlen(source) + 1;

	char* newStr = new char[strSize];

	strcpy(newStr, source);

	return newStr;
}

int compProductPrice(const void* lhsProduct, const void* rhsProduct) {
	return static_cast <const Product*> (lhsProduct)->Price - static_cast <const Product*> (rhsProduct)->Price;
}

Error addSection(Shop* pShop, const char* sectionName, const char* category)
{
	if (pShop == nullptr)
	{
		return Error::BadShop;
	}

	int size = getSectionsCount(pShop);

	Section** tempSections = new Section * [size + 1];

	for (int i = 0; i < size; ++i)
	{
		if (strcmp(pShop->pSections->Data[i]->Name, sectionName) != 0 && strcmp(pShop->pSections->Data[i]->Category, category) == 0)
		{
			return Error::SectionCategoryAlreadyExists;
		}

		tempSections[i] = pShop->pSections->Data[i];
	}

	char* copySectionName = copyStr(sectionName);

	char* copyCategory = copyStr(category);

	Section* newSection = new Section{ copySectionName, copyCategory };

	tempSections[size] = newSection;

	pShop->pSections->Data = tempSections;

	++pShop->pSections->Size;

	return Error::No;
}

Error removeSection(Shop* pShop, const char* category)
{
	if (pShop == nullptr)
	{
		return Error::BadShop;
	}

	int size = getSectionsCount(pShop);

	if (size == 0)
	{
		return Error::SectionNotFound;
	}

	int tempIndex = -1;

	for (int i = 0; i < size; ++i)
	{
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0)
		{
			tempIndex = i;
		}
	}

	if (tempIndex < 0)
	{
		return Error::SectionNotFound;
	}

	for (int i = tempIndex; i < size - 1; ++i)
	{
		pShop->pSections->Data[i] = pShop->pSections->Data[i + 1];
	}

	--pShop->pSections->Size;

	return Error::No;
}

Error addProduct(Shop* pShop, const char* productName, const char* category, uint32_t price)
{
	if (pShop == nullptr)
	{
		return Error::BadShop;
	}

	int size = getSectionsCount(pShop);
	int productsCount = getProductsCount(pShop, category);
	bool hasCategory = false;

	Product** tempProducts = new Product * [productsCount + 1];

	for (int i = 0; i < size; ++i)
	{
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0)
		{
			for (int j = 0; j < productsCount; ++j)
			{
				if (strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Name, productName) == 0 && strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Category, category) == 0)
				{
					return Error::ProductAlreadyExists;
				}
				tempProducts[j] = pShop->pSections->Data[i]->pProducts->Data[j];
			}
			hasCategory = true;
			break;
		}
	}

	if (!hasCategory)
	{
		return Error::ProductCategoryNotSuitable;
	}

	char* copyProductName = copyStr(productName);

	char* copyCategory = copyStr(category);

	Product* newProduct = new Product{ copyProductName, copyCategory };

	tempProducts[productsCount] = newProduct;

	for (int i = 0; i < size; ++i)
	{
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0)
		{
			for (int j = 0; j <= productsCount; ++j)
			{
				pShop->pSections->Data[i]->pProducts->Data[j] = tempProducts[j];
			}

			++pShop->pSections->Data[i]->pProducts->Size;
			break;
		}
	}
	
	return Error::No;
}

Error removeProduct(Shop* pShop, const char* productName, const char* category)
{
	if (pShop == nullptr)
	{
		return Error::BadShop;
	}

	int size = getSectionsCount(pShop);
	int productsCount = getProductsCount(pShop, category);
	int tempIndex = -1;

	for (int i = 0; i < size; ++i)
	{
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0)
		{
			for (int j = 0; j < productsCount; ++j)
			{
				if (strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Name, productName) == 0 && strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Category, category) == 0)
				{
					tempIndex = j;
				}
			}
		}
	}

	if (tempIndex < 0)
	{
		return Error::ProductNotFound;
	}

	for (int i = 0; i < size; ++i)
	{
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0)
		{
			for (int j = 0; j < productsCount - 1; ++j)
			{
				pShop->pSections->Data[i]->pProducts->Data[j] = pShop->pSections->Data[i]->pProducts->Data[j + 1];
			}
			--pShop->pSections->Data[i]->pProducts->Size;
			break;
		}
	}

	return Error::No;
}

const Section* getSection(Shop* pShop, const char* category, Error& err)
{
	if (pShop == nullptr)
	{
		err = Error::BadShop;
		return nullptr;
	}

	int size = getSectionsCount(pShop);

	for (int i = 0; i < size; ++i)
	{
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0)
		{
			err = Error::No;
			return pShop->pSections->Data[i];
		}
	}

	const Section* newSection = nullptr;
	err = Error::SectionNotFound;
	return newSection;
}

const Product* getProduct(Shop* pShop, const char* productName, const char* category, Error& err) 
{
	if (pShop == nullptr)
	{
		err = Error::BadShop;
		return nullptr;
	}

	int size = getSectionsCount(pShop);
	int productsCount = getProductsCount(pShop, category);

	for (int i = 0; i < size; ++i)
	{
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0)
		{
			for (int j = 0; j < productsCount; ++j)
			{
				if (strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Name, productName) == 0 && strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Category, category) == 0)
				{
					err = Error::No;
					return pShop->pSections->Data[i]->pProducts->Data[j];
				}
			}
		}
	}

	const Product* newProduct = nullptr;
	err = Error::ProductNotFound;
	return newProduct;
}

Error setProductCount(Shop* pShop, const char* productName, const char* category, uint32_t count)
{
	if (pShop == nullptr)
	{
		return Error::BadShop;
	}

	int size = getSectionsCount(pShop);
	int productsCount = getProductsCount(pShop, category);

	for (int i = 0; i < size; ++i)
	{
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0)
		{
			for (int j = 0; j < productsCount; ++j)
			{
				if (strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Name, productName) == 0 && strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Category, category) == 0)
				{
					pShop->pSections->Data[i]->pProducts->Data[j]->Count = count;
					return Error::No;
				}
			}
		}
	}

	return Error::ProductNotFound;
}

Error setProductPrice(Shop* pShop, const char* productName, const char* category, uint32_t price)
{
	if (pShop == nullptr)
	{
		return Error::BadShop;
	}

	int size = getSectionsCount(pShop);
	int productsCount = getProductsCount(pShop, category);

	for (int i = 0; i < size; ++i)
	{
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0)
		{
			for (int j = 0; j < productsCount; ++j)
			{
				if (strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Name, productName) == 0 && strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Category, category) == 0)
				{
					pShop->pSections->Data[i]->pProducts->Data[j]->Price = price;
					return Error::No;
				}
			}
		}
	}

	return Error::ProductNotFound;
}

Products* getMostExpensiveProducts(Shop* pShop, uint32_t count)
{
	if (pShop == nullptr)
	{
		return nullptr;
	}

	Products* pProducts = new Products; //Copy from Neradovskiy
	uint32_t productsSize = getAssortmentCount(pShop);
	pProducts->Data = new Product * [productsSize];
	pProducts->Size = productsSize;
	uint32_t tempCount = 0;
	uint32_t size = pShop->pSections->Size;
	for (int i = 0; i < size; ++i) {
		uint32_t counter = pShop->pSections->Data[i]->pProducts->Size;
		for (int x = 0; x < counter; ++x) {
			pProducts->Data[tempCount++] = pShop->pSections->Data[i]->pProducts->Data[x];
		}
	}
	qsort(pProducts->Data, productsSize, sizeof(pProducts->Data), compProductPrice);
	Products* pOtherProducts = new Products;
	do {
		pOtherProducts->Data[pOtherProducts->Size++] = pProducts->Data[--pProducts->Size];
	} while (pOtherProducts->Size < count);
	delete[] pProducts->Data;
	delete pProducts;
	return pOtherProducts;
}

Products* getProductsByCriteria(Shop* pShop, bool (*criteria)(const Product*))
{
	if (pShop == nullptr)
	{
		return nullptr;
	}

	uint32_t trueProductCount = 0; //Copy from Neradovskiy

	uint32_t size = pShop->pSections->Size;
	for (int i = 0; i < size; ++i) {
		uint32_t count = pShop->pSections->Data[i]->pProducts->Size;


		for (int x = 0; x < count; ++x) {
			if (criteria(pShop->pSections->Data[i]->pProducts->Data[x]))
				++trueProductCount;
		}
	}
	if (trueProductCount == 0)
		return nullptr;
	Products* pProducts = new Products;
	Product** pData = new Product * [trueProductCount];
	uint32_t arrCount = 0;

	for (int y = 0; y < size; ++y) {
		uint32_t otherCount = pShop->pSections->Data[y]->pProducts->Size;


		for (int j = 0; j < otherCount; ++j) {
			if (criteria(pShop->pSections->Data[y]->pProducts->Data[j]))
				pData[arrCount++] = pShop->pSections->Data[y]->pProducts->Data[j];
		}
	}
	pProducts->Data = pData;
	pProducts->Size = arrCount;

	return pProducts;
}

uint32_t getAssortmentCount(Shop* pShop) 
{
	uint32_t count = 0;

	if (pShop == nullptr)
	{
		return 0;
	}

	int size = getSectionsCount(pShop);

	if (size == 0)
	{
		return 0;
	}

	for (int i = 0; i < size; ++i)
	{
		count += pShop->pSections->Data[i]->pProducts->Size;
	}

	return count;
}