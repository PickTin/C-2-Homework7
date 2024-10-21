#include <iostream>
#include "ContactsContainer.h"
#include "Person.h"
#include "Colleague.h"
#include "Friend.h"

using namespace std;

int main() {
    ContactsContainer container;
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1. Add Person\n";
        cout << "2. Add Colleague\n";
        cout << "3. Add Friend\n";
        cout << "4. Display all contacts\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string lastName, address, phoneNumber;
            cout << "Enter last name, address, and phone number: ";
            cin >> lastName >> address >> phoneNumber;
            container.addContact(new Person(lastName, address, phoneNumber));
            break;
        }
        case 2: {
            string orgName, address, phoneNumber, faxNumber, contactPerson;
            cout << "Enter organization name, address, phone, fax, and contact person: ";
            cin >> orgName >> address >> phoneNumber >> faxNumber >> contactPerson;
            container.addContact(new Colleague(orgName, address, phoneNumber, faxNumber, contactPerson));
            break;
        }
        case 3: {
            string lastName, address, phoneNumber, birthDate;
            cout << "Enter last name, address, phone number, and birth date: ";
            cin >> lastName >> address >> phoneNumber >> birthDate;
            container.addContact(new Friend(lastName, address, phoneNumber, birthDate));
            break;
        }
        case 4:
            container.displayAllContacts();
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 5);

}
