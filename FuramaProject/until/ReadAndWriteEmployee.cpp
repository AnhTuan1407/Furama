//
// Created by PC on 13/05/2022.
//

#include <fstream>
#include "ReadAndWriteEmployee.h"

list<Employee> ReadAndWriteEmployee::readAllEmployee(string path) {
    list<Employee> listEmployee;
    ifstream fiEmployee(path, ios_base::in);
    if (fiEmployee.is_open())
    {
        cout << "File is open!" << endl;
        while (1)
        {
            string idCode;
            getline(fiEmployee, idCode, ',');
            string idPerson;
            getline(fiEmployee, idPerson, ',');
            string namePerson;
            getline(fiEmployee, namePerson, ',');
            string dateOfBirth;
            getline(fiEmployee, dateOfBirth, ',');
            string sex;
            getline(fiEmployee, sex, ',');
            string phoneNumber;
            getline(fiEmployee, phoneNumber, ',');
            string emailAddress;
            getline(fiEmployee, emailAddress, ',');
            string level;
            getline(fiEmployee, level, ',');
            string position;
            getline(fiEmployee, position, ',');
            float salary;
            fiEmployee >> salary;
            fiEmployee.ignore();
            if(fiEmployee.eof())
                break;
            Employee e(idCode, namePerson, dateOfBirth, sex, idPerson, phoneNumber, emailAddress, level, position, salary);

            listEmployee.push_back(e);
        }
        fiEmployee.close();
    }
    else
        cout << "File not found!" << endl;


    return listEmployee;

}

void ReadAndWriteEmployee::writeAllEmployee(string path, list<Employee> e) {
ofstream foEmployee(path, ios_base::out);
if(foEmployee.is_open()) {
    cout << "File is open!";
    for (Employee e: e) {
        foEmployee << e.getIdCode() << "," << e.getNamePerson() << "," << e.getDateOfBirth() << "," << e.getSex() <<
                "," << e.getIdPerson() << "," << e.getPhoneNumber() << "," << e.getEmailAddress() << "," << e.getLevel()
                <<
                "," << e.getPosition() << "," << e.getSalary()<<endl;
    }
    foEmployee.close();
}else
    cout << "File not found!";
}
