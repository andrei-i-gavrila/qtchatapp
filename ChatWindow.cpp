//
// Created by kiuny on 5/30/17.
//

#include <QtWidgets/QHBoxLayout>
#include "ChatWindow.hpp"
#include <QLineEdit>
#include <QtWidgets/QLabel>

void ChatWindow::update() {
    this->redraw();
}

ChatWindow::ChatWindow(const QString& username, ChatSession* session): user{username}, session{session} {
    this->session->registerObserver(this);

    this->resize(400, 600);


    QVBoxLayout* vl = new QVBoxLayout{};
    vl->addWidget(new QLabel(this->user.getName()));

    this->list = new QListWidget{this};
    vl->addWidget(this->list);


    this->input = new QLineEdit{this};
    this->input->setPlaceholderText("Enter text...");

    QHBoxLayout* hl = new QHBoxLayout{};
    hl->addWidget(this->input);

    this->sendButton = new QPushButton{"Send", this};
    hl->addWidget(this->sendButton);

    vl->addLayout(hl);
    this->setLayout(vl);

    connect(this->sendButton, &QPushButton::clicked, this, &ChatWindow::sendMessage);
    connect(this->input, &QLineEdit::returnPressed, this, &ChatWindow::sendMessage);
}

void ChatWindow::sendMessage() {
    auto msg = new Message{this->input->text()};
    this->session->addMessage(this->user, *msg);
    this->session->notify();


    this->input->clear();
}

void ChatWindow::redraw() {
    this->list->clear();

    for(auto& msg: this->session->getMessages()) {

        if(this->user == msg.getUser()) {
            auto listItem = new QListWidgetItem{};
            listItem->setText(msg.getMessage().getText());
            listItem->setBackgroundColor(Qt::cyan);
            listItem->setTextAlignment(Qt::AlignRight);
            this->list->addItem(listItem);
        } else {
            this->list->addItem(msg.toQString());
        }



    }
}
