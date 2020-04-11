//
// Created by boklazhenko on 10.03.2020.
//

#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "shop.h"

TEST_CASE("adding sections to shop") {
    Shop* pShop1 = new Shop;
    Shop* pShop2 = new Shop;
    const char* sectionName = "section13";
    const char* category = "alcohol";

    SECTION("section count equal 0 when shop only created") {
        REQUIRE(pShop1->pSections->Size == 0);
        REQUIRE(pShop2->pSections->Size == 0);
    }

    SECTION("return no error first") {
        REQUIRE(addSection(pShop1, sectionName, category) == Error::No);
    }

    SECTION("sections size equal count of addSection call") {
        addSection(pShop1, sectionName, category);
        REQUIRE(pShop1->pSections->Size == 1);
        addSection(pShop1, "secretSection", "weapon");
        addSection(pShop1, "empty", "food");
        REQUIRE(pShop1->pSections->Size == 3);
    }

    SECTION("sections size equal count of many addSection call") {
        int count = 10000;
        int err = 0;
        for (int i = 0; i < count; ++i)
            err |= addSection(pShop1, std::to_string(i).c_str(), std::to_string(i).c_str());

        REQUIRE(err == Error::No);
        REQUIRE(pShop1->pSections->Size == count);
    }

    SECTION("return bad shop error when passing nullptr shop") {
        REQUIRE(addSection(nullptr, sectionName, category) == Error::BadShop);
    }

    SECTION("return bad shop error when passing nullptr shop after success adding") {
        REQUIRE(addSection(nullptr, sectionName, category) == Error::BadShop);
        REQUIRE(addSection(pShop1, sectionName, category) == Error::No);
        REQUIRE(addSection(nullptr, sectionName, category) == Error::BadShop);
    }

    SECTION("return no error when same section names") {
        REQUIRE(addSection(pShop1, sectionName, category) == Error::No);
        REQUIRE(addSection(pShop1, sectionName, "other") == Error::No);
    }

    SECTION("return section category already exists when same section categories") {
        REQUIRE(addSection(pShop1, sectionName, category) == Error::No);
        REQUIRE(addSection(pShop1, "other", category) == Error::SectionCategoryAlreadyExists);
    }

    SECTION("return no error when same section to different shops") {
        REQUIRE(addSection(pShop1, sectionName, category) == Error::No);
        REQUIRE(addSection(pShop2, sectionName, category) == Error::No);
    }
}

TEST_CASE("removing sections from shop") {
    Shop* pShop1 = new Shop;
    Shop* pShop2 = new Shop;
    const char* sectionName = "sec1";
    const char* category = "food";

    SECTION("return bad shop when passing nullptr shop") {
        REQUIRE(removeSection(nullptr, category) == Error::BadShop);
    }

    SECTION("return section not found when empty shop") {
        REQUIRE(removeSection(pShop1, category) == Error::SectionNotFound);
        REQUIRE(pShop1->pSections->Size == 0);
    }

    SECTION("return section not found when not exists") {
        addSection(pShop1, sectionName, category);
        REQUIRE(removeSection(pShop1, "other") == Error::SectionNotFound);
        REQUIRE(pShop1->pSections->Size == 1);
    }

    SECTION("return section not found when exists section with same name") {
        addSection(pShop1, category, "other");
        REQUIRE(removeSection(pShop1, category) == Error::SectionNotFound);
        REQUIRE(pShop1->pSections->Size == 1);
    }

    SECTION("return no error when category exists") {
        addSection(pShop1, sectionName, category);
        REQUIRE(removeSection(pShop1, category) == Error::No);
        REQUIRE(pShop1->pSections->Size == 0);
    }

    SECTION("not affect to other shop") {
        addSection(pShop1, sectionName, category);
        addSection(pShop2, sectionName, category);

        REQUIRE(removeSection(pShop2, category) == Error::No);
        REQUIRE(pShop2->pSections->Size == 0);
        REQUIRE(pShop1->pSections->Size == 1);
    }

    SECTION("allow again add same section") {
        addSection(pShop1, sectionName, category);
        removeSection(pShop1, category);
        REQUIRE(addSection(pShop1, sectionName, category) == Error::No);
        REQUIRE(pShop1->pSections->Size == 1);
    }
}

TEST_CASE("can get shop section") {
    Shop* pShop = new Shop;
    const char* sectionName = "pzxcpzxc_adada";
    const char* category = "medicine";
    Error err = Error::No;

    SECTION("return nullptr section and section not found when not exists") {
        const Section* pSection = getSection(pShop, category, err);
        REQUIRE(pSection == nullptr);
        REQUIRE(err == Error::SectionNotFound);
    }

    SECTION("return nullptr section and bad shop error when passing nullptr shop") {
        const Section* pSection = getSection(nullptr, category, err);
        REQUIRE(pSection == nullptr);
        REQUIRE(err == Error::BadShop);
    }

    SECTION("return correct section and no error when exists") {
        addSection(pShop, sectionName, category);
        const Section* pSection = getSection(pShop, category, err);
        REQUIRE(pSection != nullptr);
        REQUIRE(err == Error::No);
        REQUIRE(strcmp(pSection->Category, category) == 0);
    }

    SECTION("return correct section and no error when added and removed several sections") {
        addSection(pShop, "1", "1");
        addSection(pShop, "1", "2");
        addSection(pShop, sectionName, category);
        addSection(pShop, "1", "1");
        addSection(pShop, "2", "1");
        removeSection(pShop, "1");

        const Section* pSection = getSection(pShop, category, err);
        REQUIRE(pSection != nullptr);
        REQUIRE(err == Error::No);
        REQUIRE(strcmp(pSection->Category, category) == 0);
    }
}

TEST_CASE("adding products to shop") {
    Shop* pShop1 = new Shop;
    Shop* pShop2 = new Shop;
    const char* sectionName = "section1";
    const char* productName = "milk";
    const char* category = "food";

    SECTION("return no error first with existing section") {
        addSection(pShop1, sectionName, category);
        REQUIRE(addProduct(pShop1, productName, category, 1) == Error::No);
    }

    SECTION("return bad shop when passing nullptr shop") {
        REQUIRE(addProduct(nullptr, productName, category, 1) == Error::BadShop);
    }

    SECTION("return product category not suitable when not exists suitable section") {
        REQUIRE(addProduct(pShop1, productName, category, 1) == Error::ProductCategoryNotSuitable);
        addSection(pShop1, sectionName, "other");
        REQUIRE(addProduct(pShop1, productName, category, 1) == Error::ProductCategoryNotSuitable);
    }

    SECTION("return product already exists when same product was added") {
        addSection(pShop1, sectionName, category);
        addProduct(pShop1, productName, category, 1);
        REQUIRE(addProduct(pShop1, productName, category, 1) == Error::ProductAlreadyExists);
    }

    SECTION("return product already exists when same product excluding price was added") {
        addSection(pShop1, sectionName, category);
        addProduct(pShop1, productName, category, 1);
        REQUIRE(addProduct(pShop1, productName, category, 3) == Error::ProductAlreadyExists);
    }

    SECTION("and other shop return no error") {
        addSection(pShop1, sectionName, category);
        addSection(pShop2, sectionName, category);
        addProduct(pShop1, productName, category, 1);
        REQUIRE(addProduct(pShop2, productName, category, 1) == Error::No);
    }

    SECTION("return no error when was added many products") {
        addSection(pShop1, sectionName, category);
        for (int i = 0; i < 10000; ++i)
            addProduct(pShop1, std::to_string(i).c_str(), category, i);

        REQUIRE(addProduct(pShop1, productName, category, 1) == Error::No);
    }
}

TEST_CASE("removing products from shop") {
    Shop* pShop1 = new Shop;
    Shop* pShop2 = new Shop;
    const char* sectionName = "section1";
    const char* productName = "milk";
    const char* category = "food";

    SECTION("return bad shop when passing nullptr shop") {
        REQUIRE(removeProduct(nullptr, productName, category) == Error::BadShop);
    }

    SECTION("return product not found when not exist") {
        REQUIRE(removeProduct(pShop2, productName, category) == Error::ProductNotFound);
        addSection(pShop1, sectionName, category);
        addProduct(pShop1, productName, category, 1);
        REQUIRE(removeProduct(pShop1, "1", "2") == Error::ProductNotFound);
    }

    SECTION("return product not found when was added product with same name but different category") {
        addSection(pShop1, sectionName, category);
        addProduct(pShop1, productName, category, 1);
        REQUIRE(removeProduct(pShop1, productName, "2") == Error::ProductNotFound);
    }

    SECTION("return product not found when was added product with same category but different name") {
        addSection(pShop1, sectionName, category);
        addProduct(pShop1, productName, category, 1);
        REQUIRE(removeProduct(pShop1, "1", category) == Error::ProductNotFound);
    }

    SECTION("return no error when product exists") {
        addSection(pShop1, sectionName, category);
        addProduct(pShop1, productName, category, 1);
        REQUIRE(removeProduct(pShop1, productName, category) == Error::No);
    }

    SECTION("return no error when was added many products") {
        addSection(pShop1, sectionName, category);
        addProduct(pShop1, "a", category, 1);
        for (int i = 0; i < 10000; ++i)
            addProduct(pShop1, std::to_string(i).c_str(), category, i);
        addProduct(pShop1, "b", category, 2);

        REQUIRE(removeProduct(pShop1, "a", category) == Error::No);
        REQUIRE(removeProduct(pShop1, "b", category) == Error::No);
    }
}

TEST_CASE("can get shop product") {
    Shop* pShop = new Shop;
    const char* sectionName = "section1";
    const char* productName = "milk";
    const char* category = "food";
    Error err = Error::No;

    SECTION("return nullptr product adn bad shop when passing nullptr shop") {
        const Product* pProduct = getProduct(nullptr, productName, category, err);

        REQUIRE(pProduct == nullptr);
        REQUIRE(err == Error::BadShop);
    }

    SECTION("return nullptr Product and Product not found error when not exists") {
        const Product* pProduct = getProduct(pShop, productName, category, err);

        REQUIRE(pProduct == nullptr);
        REQUIRE(err == Error::ProductNotFound);

        addSection(pShop, sectionName, category);
        addSection(pShop, "otherName", "otherCategory");
        addProduct(pShop, "otherName", category, 1);
        addProduct(pShop, "otherName", "otherCategory", 1);

        REQUIRE(removeProduct(pShop, productName, category) == Error::ProductNotFound);
    }

    SECTION("return correct product when exists") {
        addSection(pShop, sectionName, category);
        addProduct(pShop, productName, category, 1);
        const Product* pProduct = getProduct(pShop, productName, category, err);

        REQUIRE(pProduct != nullptr);
        REQUIRE(err == Error::No);
        REQUIRE(strcmp(pProduct->Name, productName) == 0);
        REQUIRE(strcmp(pProduct->Category, category) == 0);
        REQUIRE(pProduct->Price == 1);
    }

    SECTION("return correct product when was added many products") {
        addSection(pShop, sectionName, category);
        for (int i = 0; i < 10000; ++i)
            if (i == 5000)
                addProduct(pShop, productName, category, 1);
            else
                addProduct(pShop, std::to_string(i).c_str(), category, i);

        REQUIRE(removeProduct(pShop, productName, category) == Error::No);
    }
}

TEST_CASE("can set product count and price") {
    Shop* pShop = new Shop;
    const char* sectionName = "section1";
    const char* productName = "milk";
    const char* category = "food";

    SECTION("return bad shop when passing nullptr shop") {
        REQUIRE(setProductCount(nullptr, productName, category, 1) == Error::BadShop);
        REQUIRE(setProductPrice(nullptr, productName, category, 1) == Error::BadShop);
    }

    SECTION("return product not found when not exists") {
        REQUIRE(setProductCount(pShop, productName, category, 1) == Error::ProductNotFound);
        REQUIRE(setProductPrice(pShop, productName, category, 1) == Error::ProductNotFound);
    }

    SECTION("return no error when exists") {
        addSection(pShop, sectionName, category);
        addProduct(pShop, productName, category, 1);
        REQUIRE(setProductCount(pShop, productName, category, 1000) == Error::No);
        REQUIRE(setProductPrice(pShop, productName, category, 1000) == Error::No);

        Error err = Error::No;
        const Product* pProduct = getProduct(pShop, productName, category, err);

        REQUIRE(pProduct != nullptr);
        REQUIRE(err == Error::No);
        REQUIRE(pProduct->Count == 1000);
        REQUIRE(pProduct->Price == 1000);
    }
}

TEST_CASE("can get shop assortment") {
    Shop* pShop = new Shop;

    SECTION("return 0 when shop empty") {
        REQUIRE(getAssortmentCount(pShop) == 0);
    }

    SECTION("return 0 when shop nullptr") {
        REQUIRE(getAssortmentCount(nullptr) == 0);
    }

    SECTION("return correct count when products was added to different sections") {
        int addedCount = 0;

        addSection(pShop, "sec1", "food");
        for (int i = 0; i < 1000; ++i) {
            addProduct(pShop, std::to_string(i).c_str(), "food", i);
            ++addedCount;
        }

        addSection(pShop, "sec1", "weapon");
        for (int i = 0; i < 1500; ++i) {
            addProduct(pShop, std::to_string(i).c_str(), "weapon", i);
            ++addedCount;
        }

        addSection(pShop, "sec1", "medicine");
        for (int i = 0; i < 2050; ++i) {
            addProduct(pShop, std::to_string(i).c_str(), "medicine", i);
            ++addedCount;
        }

        REQUIRE(getAssortmentCount(pShop) == addedCount);
    }
}

TEST_CASE("can get most expensive products") {
    Shop* pShop = new Shop;
    const char* sectionName = "section1";
    const char* category = "food";

    SECTION("return nullptr or empty products list when shop empty") {
        Products* pProducts = getMostExpensiveProducts(pShop, 1);
        REQUIRE((pProducts == nullptr || pProducts->Size == 0));
    }

    SECTION("return nullptr or empty products list when shop nullptr") {
        Products* pProducts = getMostExpensiveProducts(nullptr, 1);
        REQUIRE((pProducts == nullptr || pProducts->Size == 0));
    }

    SECTION("return correct products size when passing more count") {
        addSection(pShop, sectionName, category);

        int count = 100;
        for (int i = 0; i < count; ++i)
            addProduct(pShop, std::to_string(i).c_str(), category, i);

        Products* pProducts = getMostExpensiveProducts(pShop, count * 2);

        REQUIRE(pProducts->Size == count);
    }

    SECTION("return correct products list when products was added to different sections") {
        addSection(pShop, "sec1", "food");
        for (int i = 0; i < 1000; ++i)
            addProduct(pShop, std::to_string(i).c_str(), "food", i);

        int expensiveProductCount = 500;
        addSection(pShop, "sec2", "weapon");
        for (int i = 0; i < expensiveProductCount; ++i)
            addProduct(pShop, std::to_string(i).c_str(), "weapon", (i + 1) * 10000);

        addSection(pShop, "sec3", "medicine");
        for (int i = 0; i < 2050; ++i)
            addProduct(pShop, std::to_string(i).c_str(), "medicine", i);

        Products* pProducts = getMostExpensiveProducts(pShop, expensiveProductCount);

        REQUIRE(pProducts->Size == expensiveProductCount);
        REQUIRE(std::all_of(pProducts->Data, pProducts->Data + pProducts->Size, [](const Product* pProduct) {
            return strcmp(pProduct->Category, "weapon") == 0;
            }));
    }
}

bool weaponCategory(const Product* pProduct) {
    return strcmp(pProduct->Category, "weapon") == 0;
}

TEST_CASE("can get products by criteria") {
    Shop* pShop = new Shop;

    SECTION("return nullptr or empty list when nullptr shop") {
        Products* pProducts = getProductsByCriteria(nullptr, weaponCategory);
        REQUIRE((pProducts == nullptr || pProducts->Size == 0));
    }

    SECTION("return nullptr or empty list when empty shop") {
        Products* pProducts = getProductsByCriteria(nullptr, weaponCategory);
        REQUIRE((pProducts == nullptr || pProducts->Size == 0));
    }

    SECTION("return correct products list when products was added to different sections") {
        addSection(pShop, "sec1", "food");
        for (int i = 0; i < 1000; ++i)
            addProduct(pShop, std::to_string(i).c_str(), "food", i);

        int weaponProductCount = 500;
        addSection(pShop, "sec2", "weapon");
        for (int i = 0; i < weaponProductCount; ++i)
            addProduct(pShop, std::to_string(i).c_str(), "weapon", (i + 1) * 10000);

        addSection(pShop, "sec3", "medicine");
        for (int i = 0; i < 2050; ++i)
            addProduct(pShop, std::to_string(i).c_str(), "medicine", i);

        Products* pProducts = getProductsByCriteria(pShop, weaponCategory);

        REQUIRE(pProducts->Size == weaponProductCount);
        REQUIRE(std::all_of(pProducts->Data, pProducts->Data + pProducts->Size, [](const Product* pProduct) {
            return strcmp(pProduct->Category, "weapon") == 0;
            }));
    }
}