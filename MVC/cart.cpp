#include "cart.h"

#include <iostream>

void Cart::addItem(const std::string& item) {
    items.push_back(item);
}

void Cart::removeItem(const std::string& item) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (*it == item) {
            items.erase(it);
            break;
        }
    }
}

const std::vector<std::string>& Cart::getItems() const {
    return items;
}
