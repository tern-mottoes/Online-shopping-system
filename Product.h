// Product.h
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    Product(const std::string& name, double price);

    const std::string& getName() const;
    double getPrice() const;

private:
    std::string name;
    double price;
};

#endif // PRODUCT_H

// Product.cpp
#include "Product.h"

Product::Product(const std::string& name, double price) : name(name), price(price) {}

const std::string& Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}
