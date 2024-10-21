#ifndef PERSON_H
#define PERSON_H

#include "Contact.h"

class Person : public Contact {
private:
    string lastName;
    string address;
    string phoneNumber;

public:
    Person(const string& lastName, const string& address, const string& phoneNumber);
    void show() const override;
};

#endif // PERSON_H
