#include "chatUser.h"
#include "chatRoom.h"

#include <iostream>

std::string ChatUser::getName() const { 
    return name; 
}

ChatRoom* ChatUser::getChatRoom() const {
    return chatRoom; 
}

void ChatUser::sendMessageUser(const std::string& receiver, const std::string& message) {
    chatRoom->sendMessageChat(name, receiver, message);
}