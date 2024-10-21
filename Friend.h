#ifndef FRIEND_H
#define FRIEND_H

#include "Contact.h"

class Friend : public Contact {
private:
    string lastName;
    string address;
    string phoneNumber;
    string birthDate;

public:
    Friend(const string& lastName, const string& address, const string& phoneNumber, const string& birthDate);
    void show() const override;
};

#endif // FRIEND_H
