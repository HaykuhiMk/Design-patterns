#ifndef CART_H
#define CART_H

#include <string>
#include <vector>

class Cart {
public:
    void addItem(const std::string& item);
    void removeItem(const std::string& item);
    const std::vector<std::string>& getItems() const;

private:
    std::vector<std::string> items;
};

#endif  //CART_H