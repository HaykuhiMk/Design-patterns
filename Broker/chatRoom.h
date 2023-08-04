#ifndef CHATROOM_H
#define CHATROOM_H

#include <string>
#include <vector>
#include "chatUser.h"

class ChatUser;

class ChatRoom {
public:
    void sendMessageChat(const std::string& senderName, const std::string& receiverName, const std::string& message);
    void addUser(ChatUser* user);

private:
    std::vector<ChatUser*> users;
};

#endif  //CHATROOM_H
