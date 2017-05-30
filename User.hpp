//
// Created by kiuny on 5/30/17.
//

#ifndef CHATAPP_USER_HPP
#define CHATAPP_USER_HPP


#include <QtCore/QString>

class User {

    QString name;

public:
    User(const QString& name);

    const QString& getName() const;

    bool operator==(const User& other);
};


#endif //CHATAPP_USER_HPP
