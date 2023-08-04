#ifndef BASIC_CHAT_ROOM_H
#define BASIC_CHAT_ROOM_H

#include <string>
#include "chatRoom.h"

class BasicChatUser : public ChatUser {
public:
    BasicChatUser(const std::string& name, ChatRoom* chatRoom) : ChatUser(name, chatRoom) {}
    void receiveMessage(const std::string& sender, const std::string& message) override;
};

#endif  //BASIC_CHAT_ROOM_H