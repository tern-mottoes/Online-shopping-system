// Order.h
#ifndef ORDER_H
#define ORDER_H

#include "Customer.h"
#include "Product.h"

class Order {
public:
    Order(const Customer& customer, const Product& product, int quantity);
    void displayOrder() const;

private:
    const Customer& customer;
    const Product& product;
    int quantity;
};

#endif // ORDER_H

// Order.cpp
#include "Order.h"
#include <iostream>

Order::Order(const Customer& customer, const Product& product, int quantity)
    : customer(customer), product(product), quantity(quantity) {}

void Order::displayOrder() const {
    std::cout << "Order Details:\n";
    std::cout << "Customer: " << customer.getName() << "\n";
    std::cout << "Product: " << product.getName() << "\n";
    std::cout << "Quantity: " << quantity << "\n";
    std::cout << "Total Price: $" << (quantity * product.getPrice()) << "\n\n";
}
