// CustomerManager.h
#ifndef CUSTOMER_MANAGER_H
#define CUSTOMER_MANAGER_H

#include "Customer.h"
#include <vector>

class CustomerManager {
public:
    void addCustomer(const Customer& customer);

private:
    std::vector<Customer> customers;
};

#endif // CUSTOMER_MANAGER_H

// CustomerManager.cpp
#include "CustomerManager.h"

void CustomerManager::addCustomer(const Customer& customer) {
    customers.push_back(customer);
}
