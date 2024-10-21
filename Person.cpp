#include "Person.h"

Person::Person(const string& lastName, const string& address, const string& phoneNumber)
    : lastName(lastName), address(address), phoneNumber(phoneNumber) {}

void Person::show() const {
    cout << "�������: " << lastName << ", ������: " << address << ", ����� ��������: " << phoneNumber << endl;
}
