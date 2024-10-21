#include "Friend.h"

Friend::Friend(const string& lastName, const string& address, const string& phoneNumber, const string& birthDate)
    : lastName(lastName), address(address), phoneNumber(phoneNumber), birthDate(birthDate) {}

void Friend::show() const {
    cout << "Друг: " << lastName << ", Адреса: " << address << ", Номер телефону: " << phoneNumber
        << ", Дата народження: " << birthDate << endl;
}
