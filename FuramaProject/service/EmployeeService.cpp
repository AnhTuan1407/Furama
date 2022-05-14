//
// Created by PC on 13/05/2022.
//

#include "EmployeeService.h"

void EmployeeService::display() {
list = ReadAndWriteEmployee().readAllEmployee("C:\\Users\\PC\\Desktop\\C++\\Furama\\FuramaProject\\data\\employee");
for(Employee e : list)
{
    e.output();
}
}

void EmployeeService::create() {
list = ReadAndWriteEmployee().readAllEmployee("C:\\Users\\PC\\Desktop\\C++\\Furama\\FuramaProject\\data\\employee");
int n = list.size();
string idCode = "NV-000" + to_string(n);
    string namePerson;
    string dateOfBirth;
    string sex;
    string idPerson;
    string phoneNumber;
    string emailAddress;
    string level;
    string position;
    float salary;

    getline(cin, namePerson);
    getline(cin, dateOfBirth);
    getline(cin, sex);
    getline(cin, idPerson);
    getline(cin, phoneNumber);
    getline(cin, emailAddress);
    getline(cin, level);
    getline(cin, position);
    cin >> salary;
    cin.ignore();
    Employee e(idCode, namePerson, dateOfBirth, sex, idPerson, phoneNumber, emailAddress, level, position, salary);
    list.push_back(e);
    ReadAndWriteEmployee().writeAllEmployee("C:\\Users\\PC\\Desktop\\C++\\Furama\\FuramaProject\\data\\employee", list);
}

void EmployeeService::edit() {

}
