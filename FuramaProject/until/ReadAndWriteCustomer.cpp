//
// Created by PC on 13/05/2022.
//

#include <fstream>
#include "ReadAndWriteCustomer.h"

list<Customer> ReadAndWriteCustomer::realAllCustomer(string path) {
    list<Customer> listCustomer;
    ifstream fiCustomer(path, ios_base::in);
    if(fiCustomer.is_open())
    {
        cout << "File is open!" << endl;
        while (1)
        {
            string idCode;
            string idPerson;
            string namePerson;
            string dateOfBirth;
            string sex;
            string phoneNumber;
            string emailAddress;
            string typeCustomer;
            string address;

            getline(fiCustomer, idCode, ',');
            getline(fiCustomer, idPerson, ',');
            getline(fiCustomer, namePerson, ',');
            getline(fiCustomer, dateOfBirth, ',');
            getline(fiCustomer, sex, ',');
            getline(fiCustomer, phoneNumber, ',');
            getline(fiCustomer, emailAddress, ',');
            getline(fiCustomer, typeCustomer, ',');
            getline(fiCustomer, address);

            if (fiCustomer.eof())
                break;

            fiCustomer.ignore();

            Customer c(idCode, namePerson, dateOfBirth, sex, idPerson, phoneNumber, emailAddress, typeCustomer, address);

            listCustomer.push_back(c);
        }
        fiCustomer.close();
    }else
        cout << "File not found!" << endl;

    return listCustomer;
}

void ReadAndWriteCustomer::writeAllCustomer(string path, list<Customer> c) {
ofstream foCustomer(path, ios_base::out);
    if(foCustomer.is_open()) {
        cout << "File is open!";
        for (Customer c: c) {
            foCustomer << c.getIdCode() << "," << c.getNamePerson() << "," << c.getDateOfBirth() << "," << c.getSex() <<
                    "," << c.getIdPerson() << "," << c.getPhoneNumber() << "," << c.getEmailAddress() << "," <<
                    "," << c.getTypeCustomer() << "," << c.getAddress() << endl;
        }
        foCustomer.close();
    }else
        cout << "File not found!";
}


