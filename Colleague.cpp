#include "Colleague.h"

Colleague::Colleague(const string& organizationName, const string& address, const string& phoneNumber, const string& faxNumber, const string& contactPerson)
    : organizationName(organizationName), address(address), phoneNumber(phoneNumber), faxNumber(faxNumber), contactPerson(contactPerson) {}

void Colleague::show() const {
    cout << "������: " << organizationName << ", ������: " << address << ", �������: " << phoneNumber
        << ", ����: " << faxNumber << ", ��������� �����: " << contactPerson << endl;
}
