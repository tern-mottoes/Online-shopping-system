#include "ProductManager.h"
#include "CustomerManager.h"
#include "Order.h"

int main() {
    // Initialize product and customer managers
    ProductManager productManager;
    CustomerManager customerManager;

    // Create products
    Product product1("Laptop", 1000);
    Product product2("Smartphone", 500);

    // Add products to the product manager
    productManager.addProduct(product1);
    productManager.addProduct(product2);

    // Create customers
    Customer customer1("Alice");
    Customer customer2("Bob");

    // Add customers to the customer manager
    customerManager.addCustomer(customer1);
    customerManager.addCustomer(customer2);

    // Display available products
    productManager.displayProducts();

    // Customers place orders
    Order order1(customer1, product1, 2);
    Order order2(customer2, product2, 1);

    // Display order details
    order1.displayOrder();
    order2.displayOrder();

    return 0;
}
