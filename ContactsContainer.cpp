#include "ContactsContainer.h"

void ContactsContainer::addContact(Contact* contact) {
    contacts.emplace_back(contact);
}

void ContactsContainer::removeContact(size_t index) {
    if (index < contacts.size()) {
        contacts.erase(contacts.begin() + index);
    }
}

void ContactsContainer::editContact(size_t index) {
}

void ContactsContainer::searchContacts(const string& criterion) const {
}

void ContactsContainer::displayAllContacts() const {
    for (const auto& contact : contacts) {
        contact->show();
    }
}
