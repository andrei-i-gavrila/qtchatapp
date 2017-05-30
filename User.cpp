//
// Created by kiuny on 5/30/17.
//

#include "User.hpp"

User::User(const QString& name) : name{name}{

}

const QString& User::getName() const {
    return this->name;
}

bool User::operator==(const User& other) {
    return this->name == other.name;
}
