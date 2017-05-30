//
// Created by kiuny on 5/30/17.
//

#include "UserMessage.hpp"

UserMessage::UserMessage(User* usr, Message* msg) : user{usr}, message{msg}{

}

const User& UserMessage::getUser() const {
    return *this->user;
}

const Message& UserMessage::getMessage() const {
    return *this->message;
}

UserMessage& UserMessage::operator=(const UserMessage& umsg) {
    this->message = umsg.message;
    this->user = umsg.user;

    return *this;
}

UserMessage::UserMessage(): user{nullptr}, message{nullptr} {

}

QString UserMessage::toQString() const {
    return this->user->getName() + ": " + this->message->getText();
}
