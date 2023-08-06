#include "cartView.h"

#include <iostream>

void CartView::showCart(const std::vector<std::string>& items) {
    if (items.empty()) {
        std::cout << "Your cart is empty.\n";
    } else {
        std::cout << "Items in your cart:\n";
        for (const auto& item : items) {
            std::cout << "- " << item << '\n';
        }
    }
}