//
// Created by kiuny on 5/30/17.
//

#include "Subject.hpp"

Subject::Subject() {

}

Subject::~Subject() {

}

void Subject::notify() {
    for(auto obs: this->observers) {
        obs->update();
    }
}

void Subject::registerObserver(Observer* obs) {
    this->observers.push_back(obs);
}

void Subject::unregisterObserver(Observer* obs) {
    this->observers.removeOne(obs);
}
