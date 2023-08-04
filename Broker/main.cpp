#include "chatRoom.h"
#include "chatUser.h"
#include "basicChatUser.h"

#include <iostream>

int main() {
    ChatRoom chatRoom;
    BasicChatUser user1("Alice", &chatRoom);
    BasicChatUser user2("Bob", &chatRoom);
    BasicChatUser user3("Charlie", &chatRoom);
    chatRoom.addUser(&user1);
    chatRoom.addUser(&user2);
    chatRoom.addUser(&user3);
    user1.sendMessageUser("Bob", "Hi Bob! How are you?");
    user2.sendMessageUser("Alice", "Hey Alice! I'm doing great. Thanks for asking!");
    user3.sendMessageUser("Alice", "Hey Alice! What's up?");
    return 0;
}
