#ifndef CONTACTSCONTAINER_H
#define CONTACTSCONTAINER_H

#include "Contact.h"
#include <vector>
#include <memory>

class ContactsContainer {
private:
    vector<unique_ptr<Contact>> contacts;

public:
    void addContact(Contact* contact);
    void removeContact(size_t index);
    void editContact(size_t index);
    void searchContacts(const string& criterion) const;
    void displayAllContacts() const;
};

#endif // CONTACTSCONTAINER_H
