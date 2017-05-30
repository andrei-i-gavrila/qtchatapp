//
// Created by kiuny on 5/30/17.
//

#ifndef CHATAPP_MESSAGE_HPP
#define CHATAPP_MESSAGE_HPP


#include <QtCore/QString>
#include <QtCore/QTime>

class Message {

    QString message;
    int timestamp;

public:
    Message(const QString& msg);

    const QString& getText() const;

    int getTimestamp() const;
};


#endif //CHATAPP_MESSAGE_HPP
