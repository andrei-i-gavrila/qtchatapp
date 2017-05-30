#include <iostream>
#include <Qt>
#include <QtWidgets/QApplication>
#include "ChatWindow.hpp"

int main(int argc, char** argv) {
    std::cout << "Hello, World!" << std::endl;

    QApplication app {argc, argv};


    ChatSession session;

    ChatWindow* win1 = new ChatWindow("User1", &session);
    ChatWindow* win2 = new ChatWindow("User2", &session);
    ChatWindow* win3 = new ChatWindow("User3", &session);

    win1->show();
    win2->show();
    win3->show();

    return app.exec();
}