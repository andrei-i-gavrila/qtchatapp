//
// Created by kiuny on 5/30/17.
//

#include "Message.hpp"

Message::Message(const QString& msg) : message{msg} {

}

const QString& Message::getText() const {
    return this->message;
}

int Message::getTimestamp() const {
    return this->timestamp;
}
