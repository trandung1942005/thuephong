#include "Person.h"

Person::Person(std::string i, std::string p) : id(i), password(p) {}

std::string Person::getId() const {
    return id;
}

std::string Person::getPassword() const {
    return password;
}

void Person::setPassword(std::string newPassword) {
    password = newPassword;
}
