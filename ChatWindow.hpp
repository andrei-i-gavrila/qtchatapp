//
// Created by kiuny on 5/30/17.
//

#ifndef CHATAPP_MESSAGEOBSERVER_HPP
#define CHATAPP_MESSAGEOBSERVER_HPP


#include <QtWidgets/QWidget>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include "Observer.hpp"
#include "User.hpp"
#include "ChatSession.hpp"

class ChatWindow: public Observer, public QWidget {
    User user;

    QListWidget* list;
    QLineEdit* input;
    QPushButton* sendButton;


    ChatSession* session;

public:

    ChatWindow(const QString& username, ChatSession* sess);
    virtual void update() override;

private:
    void redraw();

public slots:
    void sendMessage();
};


#endif //CHATAPP_MESSAGEOBSERVER_HPP
