#include "cartController.h"
#include "cart.h"
#include "cartView.h"

int main() {
    CartController cartController;
    cartController.showCart();
    cartController.addItemToCart("Apple");
    cartController.addItemToCart("Banana");
    cartController.addItemToCart("Orange");
    cartController.showCart();
    cartController.removeItemFromCart("Banana");
    cartController.showCart();
    return 0;
}
