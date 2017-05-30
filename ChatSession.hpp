//
// Created by kiuny on 5/30/17.
//

#ifndef CHATAPP_CHATSESSION_HPP
#define CHATAPP_CHATSESSION_HPP


#include "Subject.hpp"
#include "UserMessage.hpp"

class ChatSession : public Subject{
    QVector<UserMessage> messages;

public:
    ChatSession();

    void addMessage(User& usr, Message& msg);
    const QVector<UserMessage>& getMessages() const;
};


#endif //CHATAPP_CHATSESSION_HPP
