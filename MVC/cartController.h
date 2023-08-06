#ifndef CART_CONTROLLER_H
#define CART_CONTROLLER_H

#include "cart.h"
#include "cartView.h"

#include <string>
#include <vector>

class CartController {
public:
    void addItemToCart(const std::string& item);
    void removeItemFromCart(const std::string& item);
    void showCart();
    
private:
    Cart cart;
    CartView view;
};

#endif  //CART_CONTROLLER_H