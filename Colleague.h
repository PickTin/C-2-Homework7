#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include "Contact.h"

class Colleague : public Contact {
private:
    string organizationName;
    string address;
    string phoneNumber;
    string faxNumber;
    string contactPerson;

public:
    Colleague(const string& organizationName, const string& address, const string& phoneNumber, const string& faxNumber, const string& contactPerson);
    void show() const override;
};

#endif // COLLEAGUE_H
