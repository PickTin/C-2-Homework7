#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

using namespace std;

class Contact {
public:
    virtual void show() const = 0;
    virtual ~Contact() = default;
};

#endif // CONTACT_H
