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
        while (1)
        {
            string idCode;
            string idPerson;
            string namePerson;
            string dateOfBirth;
            string sex;
            string phoneNumber;
            string emailAddress;
            string level;
            string position;
            float salary;

            getline(fiEmployee, idCode, ',');
            getline(fiEmployee, namePerson, ',');
            getline(fiEmployee, dateOfBirth, ',');
            getline(fiEmployee, sex, ',');
            getline(fiEmployee, idPerson, ',');
            getline(fiEmployee, phoneNumber, ',');
            getline(fiEmployee, emailAddress, ',');
            getline(fiEmployee, level, ',');
            getline(fiEmployee, position, ',');
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

void ReadAndWriteEmployee::writeAllEmployee(string path, list<Employee> employee) {
ofstream foEmployee(path, ios_base::out);
    if(foEmployee.is_open()) {
         for (Employee e: employee) {
             foEmployee << e.getIdCode() << "," << e.getNamePerson() << "," << e.getDateOfBirth() << "," << e.getSex() <<
                  "," << e.getIdPerson() << "," << e.getPhoneNumber() << "," << e.getEmailAddress() << "," << e.getLevel()<<
                  "," << e.getPosition() << "," << e.getSalary()<<endl;
         }
    foEmployee.close();
    }else
         cout << "File not found!";
}
