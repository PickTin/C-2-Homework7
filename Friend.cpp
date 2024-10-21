#include "Friend.h"

Friend::Friend(const string& lastName, const string& address, const string& phoneNumber, const string& birthDate)
    : lastName(lastName), address(address), phoneNumber(phoneNumber), birthDate(birthDate) {}

void Friend::show() const {
    cout << "����: " << lastName << ", ������: " << address << ", ����� ��������: " << phoneNumber
        << ", ���� ����������: " << birthDate << endl;
}
