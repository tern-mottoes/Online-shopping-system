// ProductManager.h
#ifndef PRODUCT_MANAGER_H
#define PRODUCT_MANAGER_H

#include "Product.h"
#include <vector>

class ProductManager {
public:
    void addProduct(const Product& product);
    void displayProducts() const;

private:
    std::vector<Product> products;
};

#endif // PRODUCT_MANAGER_H

// ProductManager.cpp
#include "ProductManager.h"
#include <iostream>

void ProductManager::addProduct(const Product& product) {
    products.push_back(product);
}

void ProductManager::displayProducts() const {
    std::cout << "Available Products:\n";
    for (const Product& product : products) {
        std::cout << product.getName() << " - Price: $" << product.getPrice() << "\n";
    }
    std::cout << "\n";
}
