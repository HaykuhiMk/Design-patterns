#ifndef CHAT_USER_H
#define CHAT_USER_H

#include "chatRoom.h"

#include <string>

class ChatRoom;

class ChatUser {
public:
    ChatUser(const std::string& name, ChatRoom* chatRoom) : name(name), chatRoom(chatRoom) {}
    virtual void receiveMessage(const std::string& sender, const std::string& message) = 0;
    virtual void sendMessageUser(const std::string& receiver, const std::string& message);
    std::string getName() const;
    ChatRoom* getChatRoom() const;

protected:
    std::string name;
    ChatRoom* chatRoom;
};

#endif  //CHAT_USER_H
