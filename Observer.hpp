//
// Created by kiuny on 5/30/17.
//

#ifndef CHATAPP_OBSERVER_HPP
#define CHATAPP_OBSERVER_HPP


class Observer {

public:
    Observer();
    virtual ~Observer();
    virtual void update() = 0;
};


#endif //CHATAPP_OBSERVER_HPP
