//
// Created by PC on 13/05/2022.
//

#include "CustomerService.h"

void CustomerService::display() {
    listCustomer = ReadAndWriteCustomer().realAllCustomer("C:\\Users\\PC\\Desktop\\C++\\Furama\\FuramaProject\\data\\customer");
    for(Customer e : listCustomer)
    {
        e.output();
    }
}

void CustomerService::create() {
    listCustomer = ReadAndWriteCustomer().realAllCustomer("C:\\Users\\PC\\Desktop\\C++\\Furama\\FuramaProject\\data\\customer");
    int n = listCustomer.size();

    string idCode = "KH-000" + to_string(n);
    string idPerson;
    string namePerson;
    string dateOfBirth;
    string sex;
    string phoneNumber;
    string emailAddress;
    string typeCustomer;
    string address;

    cout << "Enter NamePerson: ";
    getline(cin, namePerson);
    cout << "Enter DateOfBirth: ";
    getline(cin, dateOfBirth);
    cout << "Enter Sex: ";
    getline(cin, sex);
    cout << "Enter IdPerson: ";
    getline(cin, idPerson);
    cout << "Enter PhoneNumber: ";
    getline(cin, phoneNumber);
    cout << "Enter EmailAddress: ";
    getline(cin, emailAddress);
    cout << "Enter TypeCustomer: ";
    getline(cin, typeCustomer);
    cout << "Enter Address: ";
    getline(cin, address);

    Customer c(idCode, namePerson, dateOfBirth, sex, idPerson, phoneNumber, emailAddress, typeCustomer, address);

    listCustomer.push_back(c);
    ReadAndWriteCustomer().writeAllCustomer("C:\\Users\\PC\\Desktop\\C++\\Furama\\FuramaProject\\data\\customer", listCustomer);
}

void CustomerService::edit() {

}
