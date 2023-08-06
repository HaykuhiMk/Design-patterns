#include "cartController.h"

#include <iostream>

void CartController::addItemToCart(const std::string& item) {
    cart.addItem(item);
}

void CartController::removeItemFromCart(const std::string& item) {
    cart.removeItem(item);
}

void CartController::showCart() {
    const std::vector<std::string>& items = cart.getItems();
    view.showCart(items);
}   