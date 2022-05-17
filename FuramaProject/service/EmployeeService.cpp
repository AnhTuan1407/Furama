//
// Created by PC on 13/05/2022.
//

#include "EmployeeService.h"

void EmployeeService::display() {
    listEmployee = ReadAndWriteEmployee().readAllEmployee("C:\\Users\\PC\\Desktop\\C++\\Furama\\FuramaProject\\data\\employee");
    for(Employee e : listEmployee)
    {
        e.output();
    }
}

void EmployeeService::create() {
    listEmployee = ReadAndWriteEmployee().readAllEmployee("C:\\Users\\PC\\Desktop\\C++\\Furama\\FuramaProject\\data\\employee");
int n = listEmployee.size();
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
    cout << "Enter Level: ";
    getline(cin, level);
    cout << "Enter Position: ";
    getline(cin, position);
    cout << "Enter Salary: ";
    cin >> salary;
    cin.ignore();
    Employee e(idCode, namePerson, dateOfBirth, sex, idPerson, phoneNumber, emailAddress, level, position, salary);
    listEmployee.push_back(e);
    ReadAndWriteEmployee().writeAllEmployee("C:\\Users\\PC\\Desktop\\C++\\Furama\\FuramaProject\\data\\employee", listEmployee);
}

void EmployeeService::edit() {

}
