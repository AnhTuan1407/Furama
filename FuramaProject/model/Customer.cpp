//
// Created by Kienroro on 08/05/2022.
//

#include "Customer.h"

Customer::Customer() {}

Customer::Customer(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
               const string &idPerson, const string &phoneNumber, const string &emailAddress,
               const string &typeCustomer, const string &address) : Person(idCode, namePerson, dateOfBirth, sex,
                                                                           idPerson, phoneNumber, emailAddress),
                                                                    typeCustomer(typeCustomer), address(address) {}

void Customer::output() {
    cout << "Customer { idCode: " << idCode << ", namePerson: " << namePerson << ", dateOfBirth: " << dateOfBirth <<
         ", sex: " << sex << ", idPerson: " << idPerson << ", phoneNumber: " << phoneNumber << ", emailAddress: " <<
         emailAddress << ", typeCustomer: " << typeCustomer << ", address: " << address << " }" << endl;
}

const string &Customer::getTypeCustomer() const {
    return typeCustomer;
}

void Customer::setTypeCustomer(const string &typeCustomer) {
    Customer::typeCustomer = typeCustomer;
}

const string &Customer::getAddress() const {
    return address;
}

void Customer::setAddress(const string &address) {
    Customer::address = address;
}
