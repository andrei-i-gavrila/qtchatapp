//
// Created by kiuny on 5/30/17.
//

#ifndef CHATAPP_MESSAGELIST_HPP
#define CHATAPP_MESSAGELIST_HPP


#include <QtCore/QVector>
#include "Observer.hpp"

class Subject {

    QVector<Observer*> observers;

public:
    Subject();
    virtual ~Subject();


    void notify();
    void registerObserver(Observer* obs);
    void unregisterObserver(Observer* obs);

};


#endif //CHATAPP_MESSAGELIST_HPP
