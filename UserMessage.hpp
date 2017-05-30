//
// Created by kiuny on 5/30/17.
//

#ifndef CHATAPP_USERMESSAGE_HPP
#define CHATAPP_USERMESSAGE_HPP


#include "User.hpp"
#include "Message.hpp"

class UserMessage {
    User* user;
    Message* message;

public:
    UserMessage();
    UserMessage(User* usr, Message* msg);
    UserMessage& operator=(const UserMessage& umsg);
    const User& getUser() const;
    const Message& getMessage() const;

    QString toQString() const;
};


#endif //CHATAPP_USERMESSAGE_HPP
