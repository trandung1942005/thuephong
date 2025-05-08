#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string id;
    std::string password;

public:
    Person(std::string i, std::string p);
    std::string getId() const;
    std::string getPassword() const;
    void setPassword(std::string newPassword);
};

#endif // PERSON_H
