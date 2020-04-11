#define _CRT_SECURE_NO_WARNINGS
#include "shop.h"
#include <cstring>
#include <iostream>


Section* copySection(Shop* pShop, const char* sectionName, const char* category) {
	char* copySectionName = new char[strlen(sectionName) + 1];
	char* copyCategory = new char[strlen(category) + 1];
	return new Section{ strcpy(copySectionName,sectionName),strcpy(copyCategory,category) };
}

Error addSection(Shop* pShop, const char* sectionName, const char* category) {
	if (pShop == nullptr)
		return Error::BadShop;
	Section** pSections = new Section * [pShop->pSections->Size + 1];
	for (int i = 0; i < pShop->pSections->Size; ++i)
	{
		if ((strcmp(pShop->pSections->Data[i]->Name, sectionName) != 0) && (strcmp(pShop->pSections->Data[i]->Category, category) == 0))
			return Error::SectionCategoryAlreadyExists;
		pSections[i] = pShop->pSections->Data[i];
	}
	pSections[pShop->pSections->Size] = copySection(pShop, sectionName, category);
	pShop->pSections->Data = pSections;
	++pShop->pSections->Size;
	return Error::No;
	delete[]pSections;
}

Error removeSection(Shop* pShop, const char* category) {
	if (pShop == nullptr)
		return Error::BadShop;
	int tempIndex = -1;
	for (int i = 0; i < pShop->pSections->Size; ++i)
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0)
			tempIndex = i;
	if (tempIndex < 0)
		return Error::SectionNotFound;
	for (int i = tempIndex; i < pShop->pSections->Size - 1; ++i)
		pShop->pSections->Data[i] = pShop->pSections->Data[i + 1];
	--pShop->pSections->Size;
	return Error::No;

}

Product* copyProduct(Shop* pShop, const char* productName, const char* category, uint32_t price) {
	char* copyProductName = new char[strlen(productName) + 1];
	char* copyCategory = new char[strlen(category) + 1];
	return new Product{ strcpy(copyProductName,productName),strcpy(copyCategory,category), price };
}

uint32_t getProductsCount(const Shop* pShop, const char* category) {
	for (uint32_t i = 0; i < pShop->pSections->Size; ++i)
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0)
			return pShop->pSections->Data[i]->pProducts->Size;
	return 0;
}


Error addProduct(Shop* pShop, const char* productName, const char* category, uint32_t price) {
	if (pShop == nullptr)
		return Error::BadShop;
	int indexI = -1;
	Product** tempProducts = new Product * [getProductsCount(pShop, category) + 1];
	for (int i = 0; i < pShop->pSections->Size; ++i) {
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0) {
			indexI = i;
			for (int j = 0; j < getProductsCount(pShop, category); ++j) {
				if (strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Name, productName) == 0 && strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Category, category) == 0)
					return Error::ProductAlreadyExists;
				tempProducts[j] = pShop->pSections->Data[i]->pProducts->Data[j];
			}
		}
	}
	if (indexI < 0)
		return Error::ProductCategoryNotSuitable;
	tempProducts[getProductsCount(pShop, category)] = copyProduct(pShop, productName, category, price);
	for (int i = 0; i < pShop->pSections->Size; ++i) {
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0) {
			for (int j = 0; j <= getProductsCount(pShop, category); ++j)
				pShop->pSections->Data[i]->pProducts->Data[j] = tempProducts[j];
			++pShop->pSections->Data[i]->pProducts->Size;
		}
	}
	return Error::No;
	delete[] tempProducts;
	}


Error removeProduct(Shop* pShop, const char* productName, const char* category) {
	if (pShop == nullptr)
		return Error::BadShop;
	int indexToRemove = -1;
	for (int i = 0; i < pShop->pSections->Size; ++i) {
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0) {
			for (int j = 0; j < getProductsCount(pShop, category); ++j)
				if (strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Name, productName) == 0 && strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Category, category) == 0)
					indexToRemove = j;
		}
	}
	if (indexToRemove < 0)
		return Error::ProductNotFound;
	for (int i = 0; i < pShop->pSections->Size; ++i) {
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0) {
			for (int j = indexToRemove; j < getProductsCount(pShop, category) - 1; ++j)
				pShop->pSections->Data[i]->pProducts->Data[j] = pShop->pSections->Data[i]->pProducts->Data[j + 1];
		}
	}
	for (int i = 0; i < pShop->pSections->Size; ++i) {
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0) {
			for (int j = getProductsCount(pShop, category) - 1; j < getProductsCount(pShop, category); ++j)
				pShop->pSections->Data[i]->pProducts->Data[getProductsCount(pShop, category) - 1] = nullptr;
		}
		--pShop->pSections->Data[i]->pProducts->Size;
	}
	
	return Error::No;
}

const Section* getSection(Shop* pShop, const char* category, Error& err) {
	if (pShop == nullptr)
		err = Error::BadShop;
	return nullptr;
	for (int i = 0; i < pShop->pSections->Size; ++i) {
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0) {
			return pShop->pSections->Data[i];
			err = Error::No;
		}
	}
	err = Error::SectionNotFound;
	return nullptr;
}

const Product* getProduct(Shop* pShop, const char* productName, const char* category, Error& err) {
	if (pShop == nullptr)
		err = Error::BadShop;
	return nullptr;
	for (int i = 0; i < pShop->pSections->Size; ++i) {
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0) {
			for (int j = 0; j < getProductsCount(pShop, category); ++j) {
				if (strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Name, productName) == 0 && strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Category, category) == 0)
					return pShop->pSections->Data[i]->pProducts->Data[j];
				err = Error::No;
			}
		}
	}
	err = Error::SectionNotFound;
	return nullptr;
}

Error setProductCount(Shop* pShop, const char* productName, const char* category, uint32_t count) {

	if (pShop == nullptr)
		return Error::BadShop;
	for (int i = 0; i < pShop->pSections->Size; ++i) {
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0 && pShop->pSections->Data[i]->pProducts != nullptr) {
			for (int j = 0; j < getProductsCount(pShop, category); ++j) {
				if (strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Name, productName) == 0 && strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Category, category) == 0) {
					pShop->pSections->Data[i]->pProducts->Data[j]->Price = count;
					return Error::No;
				}
			}
		}
	}

	return Error::ProductNotFound;
}

Error setProductPrice(Shop* pShop, const char* productName, const char* category, uint32_t price) {
	if (pShop == nullptr)
		return Error::BadShop;
	for (int i = 0; i < pShop->pSections->Size; ++i) {
		if (strcmp(pShop->pSections->Data[i]->Category, category) == 0 && pShop->pSections->Data[i]->pProducts != nullptr) {
			for (int j = 0; j < getProductsCount(pShop, category); ++j) {
				if (strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Name, productName) == 0 && strcmp(pShop->pSections->Data[i]->pProducts->Data[j]->Category, category) == 0) {
					pShop->pSections->Data[i]->pProducts->Data[j]->Price = price;
					return Error::No;
				}
			}
		}
	}
	return Error::ProductNotFound;
}

int compProductPrice(const void* lhsProduct, const void* rhsProduct) {
	return static_cast <const Product*> (lhsProduct)->Price - static_cast <const Product*> (rhsProduct)->Price;
}

Products* getMostExpensiveProducts(Shop* pShop, uint32_t count) {
	if (pShop == nullptr)
		return nullptr;
	Product** tempProducts = new Product * [getAssortmentCount(pShop)];
	for (int i = 0; i < pShop->pSections->Size;++i) {
		for (int j = 0; j < pShop->pSections->Data[i]->pProducts->Size; ++j)
			tempProducts[i] = pShop->pSections->Data[i]->pProducts->Data[j];
}
	for (int i = 0; i < pShop->pSections->Size;++i)
		qsort(tempProducts, getAssortmentCount(pShop), sizeof(pShop->pSections->Data[i]->pProducts->Data),compProductPrice);
	
	Products* mostExpensiveProducts = new Products  [count];
	for (int i = 0; i < count; ++i)
		mostExpensiveProducts[i] = tempProducts[i];
	return mostExpensiveProducts;
	delete[]tempProducts;
	
}

Products* getProductsByCriteria(Shop* pShop, bool (*criteria)(const Product*)) {
	
	//took from Kolja, didn`t understand by myself(((
	if(pShop=nullptr)
		return nullptr;

	int trueProductCount = 0;

	for (int i = 0; i < pShop->pSections->Size; ++i) {
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

	for (int y = 0; y < pShop->pSections->Size; ++y) {
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
	if (pShop == nullptr || pShop->pSections->Size == 0)
		return 0;
	int assortmentCount = 0;
	for (int i = 0; i < pShop->pSections->Size; ++i)
		assortmentCount += pShop->pSections->Data[i]->pProducts->Size;
	return assortmentCount;
}
