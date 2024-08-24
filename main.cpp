#include "inventory.h"
#include <iostream>

int main() {
    Inventory inventory;

    // Adding products to the inventory
    inventory.addProduct(Product(1, "Laptop", 10, 999.99));
    inventory.addProduct(Product(2, "Smartphone", 25, 499.99));
    inventory.addProduct(Product(3, "Tablet", 15, 299.99));

    std::cout << "\nInitial Inventory:\n";
    inventory.displayInventory();

    // Removing a product
    inventory.removeProduct(2);

    std::cout << "\nInventory after removing product with ID 2:\n";
    inventory.displayInventory();

    // Updating product quantity
    inventory.updateProductQuantity(1, 20);

    std::cout << "\nInventory after updating quantity of product with ID 1:\n";
    inventory.displayInventory();

    return 0;
}
