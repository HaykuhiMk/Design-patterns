#include "basicChatUser.h"

#include <iostream>

void BasicChatUser::receiveMessage(const std::string& sender, const std::string& message) {
    std::cout << name << " received a message from " << sender << ": " << message << std::endl;
}