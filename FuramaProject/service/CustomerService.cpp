//
// Created by PC on 13/05/2022.
//

#include "CustomerService.h"

void CustomerService::display() {
    listCustomer = ReadAndWriteCustomer().realAllCustomer("C:\\Users\\PC\\Desktop\\C++\\Furama\\FuramaProject\\data\\customer");
    for(Customer c : listCustomer)
    {
        c.output();
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
listCustomer = ReadAndWriteCustomer().realAllCustomer("C:\\Users\\PC\\Desktop\\C++\\Furama\\FuramaProject\\data\\customer");
    CustomerService().display();
    string idChange;
    cout << "Enter IdCode you want change: ";
    cin >> idChange;
    Customer *temp;
    bool check = true;
    for (Customer &c: listCustomer) {
        if (idChange == c.getIdCode()) {
            c.output();
            temp = &c;
            check = false;
        }
    if(check)
    {
        cout << "Id is not found!" << endl;
    }else
    {
        while (1)
        {
            int choice;
            cout << "1. Change Name " << endl;
            cout << "2. Change DateOfBirth " << endl;
            cout << "3. Change Sex " << endl;
            cout << "4. Change idPerson " << endl;
            cout << "5. Change PhoneNumber " << endl;
            cout << "6. Change EmailAddress " << endl;
            cout << "7. Change TypeCustomer " << endl;
            cout << "8. Change Address " << endl;
            cout << "9. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            cin.ignore();

            switch (choice) {
                case 1:
                {
                    cout << "Change Name" << endl;
                    string swapName;
                    cout << "Name(" << c.getNamePerson() <<")" << endl;
                    cout << "Enter swapName: ";
                    getline(cin, swapName);
                    temp->setNamePerson(swapName);
                    temp->output();
                    cout << "Successful Change!" << endl;
                    break;
                }
                case 2:
                {
                    cout << "Change DateOfBirth" << endl;
                    string swapDate;
                    cout << "DateOfBirth(" << c.getDateOfBirth() <<")" << endl;
                    cout << "Enter swapName: ";
                    getline(cin, swapDate);
                    temp->setDateOfBirth(swapDate);
                    temp->output();
                    cout << "Successful Change!" << endl;
                    break;
                }
                case 3:
                {
                    cout << "Change Sex" << endl;
                    string swapSex;
                    cout << "Sex(" << c.getSex() <<")" << endl;
                    cout << "Enter swapSex: ";
                    getline(cin, swapSex);
                    temp->setSex(swapSex);
                    temp->output();
                    cout << "Successful Change!" << endl;
                    break;
                }
                case 4:
                {
                    cout << "Change idPerson" << endl;
                    string swapId;
                    cout << "IdPerson(" << c.getIdPerson() <<")" << endl;
                    cout << "Enter swapId: ";
                    getline(cin, swapId);
                    temp->setSex(swapId);
                    temp->output();
                    cout << "Successful Change!" << endl;
                    break;
                }
                case 5:
                {
                    cout << "Change PhoneNumber" << endl;
                    string swapPhone;
                    cout << "PhoneNumber(" << c.getPhoneNumber() <<")" << endl;
                    cout << "Enter swapPhone: ";
                    getline(cin, swapPhone);
                    temp->setPhoneNumber(swapPhone);
                    temp->output();
                    cout << "Successful Change!" << endl;
                    break;
                }
                case 6:
                {
                    cout << "Change EmailAddress" << endl;
                    string swapEmail;
                    cout << "EmailAddress(" << c.getEmailAddress() <<")" << endl;
                    cout << "Enter swapEmail: ";
                    getline(cin, swapEmail);
                    temp->setEmailAddress(swapEmail);
                    temp->output();
                    cout << "Successful Change!" << endl;
                    break;
                }
                case 7:
                {
                    cout << "Change TypeCustomer" << endl;
                    string swapType;
                    cout << "TypeCustomer(" << c.getTypeCustomer() <<")" << endl;
                    cout << "Enter swapType: ";
                    getline(cin, swapType);
                    temp->setTypeCustomer(swapType);
                    temp->output();
                    cout << "Successful Change!" << endl;
                    break;
                }
                case 8:
                {
                    cout << "Change Address" << endl;
                    string swapAddress;
                    cout << "Address(" << c.getAddress() <<")" << endl;
                    cout << "Enter swapAddress: ";
                    getline(cin, swapAddress);
                    temp->setAddress(swapAddress);
                    temp->output();
                    cout << "Successful Change!" << endl;
                    break;
                }
                case 9:
                {
                    return;
                }
            }
            ReadAndWriteCustomer().writeAllCustomer("C:\\Users\\PC\\Desktop\\C++\\Furama\\FuramaProject\\data\\customer", listCustomer);
        }
    }
    }
}
