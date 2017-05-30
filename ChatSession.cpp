//
// Created by kiuny on 5/30/17.
//

#include "ChatSession.hpp"

ChatSession::ChatSession() {

}

void ChatSession::addMessage(User& usr, Message& msg) {
    this->messages.push_back({&usr, &msg});
}

const QVector<UserMessage>& ChatSession::getMessages() const {
    return this->messages;
}
