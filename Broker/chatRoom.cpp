#include "chatRoom.h"
#include "chatUser.h"

#include <iostream>

void ChatRoom::sendMessageChat(const std::string& senderName, const std::string& receiverName, const std::string& message) { // Updated function signature
    for (ChatUser* user : users) {
        if (user->getName() == receiverName) { 
            user->receiveMessage(senderName, message);
            return;
        }
    }
    std::cout << "Error: " << receiverName << " not found in the chat room." << std::endl;
}

void ChatRoom::addUser(ChatUser* user) {
    users.push_back(user);
}
