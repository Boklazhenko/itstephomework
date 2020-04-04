#define _CRT_SECURE_NO_WARNINGS
#include "shop.h"
#include <iostream>

bool isExistCategory(const Shop& shop, const Section& section) {
	int size = shop.pSections->Size;
	for (int i = 0; i < size; ++i) {
		if (strcmp(shop.pSections->Data[i]->Name, section.Name) == 0 &&
			strcmp(shop.pSections->Data[i]->Category, section.Category) == 0)
			return true;
	}
	return	false;
}

bool isExistProduct(const Shop* pShop, const char* productName, const char* category) {
	int size = pShop->pSections->Size;
	for (int i = 0; i < size; ++i)
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0 &&
			pShop->pSections->Data[i]->pProducts != nullptr) {

			int productSize = pShop->pSections->Data[size]->pProducts->Size;

			for (int x = 0; x < productSize; ++x)
				if (strcmp(pShop->pSections->Data[i]->pProducts->Data[x]->Name, productName))
					return true;
		}
	return false;
}

Error isError(const Shop* pShop) {
	if (pShop == nullptr)
		return Error::BadShop;
	//uint32_t size = pShop->pSections->Size;
	//for (int i = 0; i < size; ++i)
	//if (pShop->pSections[i])
	return Error::No;
}

Error isError(const Shop* pShop, const Section* pSection) {
	//SHOP
	if (pShop == nullptr)			// нужна ли проверка на имя магазина?
		return Error::BadShop;
	//SECTION
	if (pSection == nullptr)
		return Error::SectionNotFound;
	if (pSection->Name == nullptr && pSection->Category == nullptr)
		return Error::SectionCategoryAlreadyExists;

	return Error::No;
}
Error isError(const Shop* pShop, const char* category) {
	//SHOP
	if (pShop == nullptr)			// нужна ли проверка на имя магазина?
		return Error::BadShop;
	//CATEGORY
	if (category == nullptr)
		return Error::SectionNotFound;

	return Error::No;
}
Error isError(const Shop* pShop, const char* productName, const char* category) {
	Error err = isError(pShop, category);
	if (err)
		return err;
	if (isExistProduct(pShop, productName, category))
		return Error::ProductAlreadyExists;

}

int compProductPrice(const void* lhsProduct, const void* rhsProduct) {
	return static_cast <const Product*> (lhsProduct)->Price - static_cast <const Product*> (rhsProduct)->Price;
}

Error addSection(Shop* pShop, const char* sectionName, const char* category) {

	int categorySize = strlen(category) + 1;			
	char* tempCategory = new char[categorySize];
	int nameSize = strlen(sectionName) + 1;
	char* tempSectionName = new char[nameSize];


	strcpy(tempCategory, category);
	strcpy(tempSectionName, sectionName);
	Section* pNewSection = new Section{ tempSectionName, tempCategory };
	Error err = isError(pShop, pNewSection);
	if (err != Error::No)
		return err;

	if (isExistCategory(*pShop, *pNewSection))
		return Error::SectionCategoryAlreadyExists;
	int size = pShop->pSections->Size;
	Sections* tempSections = new Sections[size + 1];

	for (int i = 0; i < size; ++i)
		tempSections->Data[i] = pShop->pSections->Data[i];
	tempSections->Data[size] = pNewSection;
	delete[] pShop->pSections->Data;
	delete pShop->pSections;
	pShop->pSections = tempSections;
	pShop->pSections->Size = ++size;
	return err;
}

Error removeSection(Shop* pShop, const char* category) {
	Error err = isError(pShop, category);
	if (err == Error::SectionNotFound)
		err = Error::No;
	if (err != Error::No)
		return err;

	int size = pShop->pSections->Size;
	for (int a = size; a > 0; --a)
		if (strcmp(pShop->pSections->Data[a - 1]->Category, category) == 0) {
			Section** tempSections = new Section * [size - 1];
			for (int i = 0; i < size; ++i)
				tempSections[i] = pShop->pSections->Data[i];

			for (int x = size; x < size - 1; ++x)
				tempSections[x] = pShop->pSections->Data[x + 1];
			//delete[] pShop->pSections->Data;
			//delete pShop->pSections;
			pShop->pSections->Data = tempSections;
			pShop->pSections->Size = --size;
		}

	return err;
}

Error addProduct(Shop* pShop, const char* productName, const char* category, uint32_t price) {
	Error err = isError(pShop, productName, category);
	if (err != No)
		return err;
	int size = pShop->pSections->Size;
	for (int x = 0; x < size; ++x)
		if (strcmp(pShop->pSections->Data[x]->Category, category) == 0) {
			int count = pShop->pSections->Data[x]->pProducts->Size;
			Product** tempProducts = new Product * [count + 1];

			for (int i = 0; i < count; ++i)
				tempProducts[i] = pShop->pSections->Data[x]->pProducts->Data[i];
			char* tempName = new char[strlen(productName) + 1];
			char* tempCategory = new char[strlen(category) + 1];
			strcpy(tempName, productName);
			strcpy(tempCategory, category);
			tempProducts[count] = new Product{ tempName, tempCategory, price };
			//delete[] pShop->pSections->Data[size]->pProducts->Data;

			pShop->pSections->Data[x]->pProducts->Data = tempProducts;
			pShop->pSections->Data[x]->pProducts->Size = ++count;
			return err;
		}

}

Error removeProduct(Shop* pShop, const char* productName, const char* category) {
	Error err = isError(pShop, category);
	if (err != No)
		return err;
	int size = pShop->pSections->Size;
	for (int a = 0; a < size; ++a)
		if (strcmp(pShop->pSections->Data[a]->Category, category) == 0) {
			int count = pShop->pSections->Data[a]->pProducts->Size;

			for (int i = 0; i < count; ++i) {
				if (strcmp(pShop->pSections->Data[a]->pProducts->Data[i]->Name, productName) == 0) {
					Product** pNewProducts = new Product * [count - 1];

					for (int x = 0; x < i; ++x)
						pNewProducts[x] = pShop->pSections->Data[a]->pProducts->Data[x];

					for (int y = i; y < count - 1; ++y)
						pNewProducts[y] = pShop->pSections->Data[a]->pProducts->Data[y + 1];

					//delete[] pShop->pSections->Data[a]->pProducts->Data;

					pShop->pSections->Data[a]->pProducts->Data = pNewProducts;
					pShop->pSections->Data[a]->pProducts->Size = --count;
					return err;
				}
			}
		}
}

const Section* getSection(Shop* pShop, const char* category, Error& err) {
	err = isError(pShop, category);
	if (err != Error::No)
		return nullptr;
	int size = pShop->pSections->Size;
	for (; size > 0; --size)
		if (strcmp(pShop->pSections->Data[size - 1]->Category, category) == 0)
			return pShop->pSections->Data[size - 1];
}

const Product* getProduct(Shop* pShop, const char* productName, const char* category, Error& err) {
	err = isError(pShop, productName, category);
	if (err == Error::ProductAlreadyExists)
		err == Error::No;
	if (err != Error::No)
		return nullptr;
	int size = pShop->pSections->Size;
	for (int a = 0; a < size; ++a)
		if (strcmp(pShop->pSections->Data[a]->Category, category) == 0) {
			int count = pShop->pSections->Data[a]->pProducts->Size;

			for (int i = 0; i < count; ++i) {
				if (strcmp(pShop->pSections->Data[a]->pProducts->Data[i]->Name, productName) == 0)
					return pShop->pSections->Data[a]->pProducts->Data[i];
			}
		}
}
Error setProductCount(Shop* pShop, const char* productName, const char* category, uint32_t count) {
	Error err = isError(pShop, productName, category);
	if (err == Error::ProductAlreadyExists)
		err == Error::No;
	if (err != Error::No)
		return err;
	uint32_t size = pShop->pSections->Size;
	for (int i = 0; i < size; ++i)
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0) {
			uint32_t count = pShop->pSections->Data[i]->pProducts->Size;
			for (int x = 0; x < count; ++x)
				if (strcmp(pShop->pSections->Data[i]->pProducts->Data[x]->Name, productName) == 0)
					pShop->pSections->Data[i]->pProducts->Data[x]->Count = count;
			return err;
		}
}

Error setProductPrice(Shop* pShop, const char* productName, const char* category, uint32_t price) {
	Error err = isError(pShop, productName, category);
	if (err == Error::ProductAlreadyExists)
		err == Error::No;
	if (err != Error::No)
		return err;
	uint32_t size = pShop->pSections->Size;
	for (int i = 0; i < size; ++i)
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0) {
			uint32_t count = pShop->pSections->Data[i]->pProducts->Size;
			for (int x = 0; x < count; ++x)
				if (strcmp(pShop->pSections->Data[i]->pProducts->Data[x]->Name, productName) == 0)
					pShop->pSections->Data[i]->pProducts->Data[x]->Price = price;
			return err;
		}
}

Products* getMostExpensiveProducts(Shop* pShop, uint32_t count) {
	Error err = isError(pShop);
	if (err != Error::No || count == 0)
		return nullptr;

	Products* pProducts = new Products;
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

Products* getProductsByCriteria(Shop* pShop, bool (*criteria)(const Product*)) {
	Error err = isError(pShop);
	if (err != Error::No)
		return nullptr;

	uint32_t trueProductCount = 0;

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
	pProducts->Size - arrCount;
	return pProducts;
}

uint32_t getAssortmentCount(Shop* pShop) {

	uint64_t count = 0;
	if (pShop == nullptr)
		return 0;
	uint32_t sectionSize = pShop->pSections->Size;
	for (int i = 0; i < sectionSize; ++i)
		count += pShop->pSections->Data[i]->pProducts->Size;

	return count;
}

