//
// Created by PC on 13/05/2022.
//

#include <fstream>
#include "ReadAndWriteEmployee.h"

list<Employee> ReadAndWriteEmployee::readAllEmployee(string path) {
    list<Employee> list;
    ifstream fileIn(path, ios_base::in);
    if (fileIn.is_open()){
        cout << "Mo file thanh cong!" << endl;
        while (1)
        {
            string idCode;
            getline(fileIn, idCode, ',');
            string idPerson;
            getline(fileIn, idPerson, ',');
            string namePerson;
            getline(fileIn, namePerson, ',');
            string dateOfBirth;
            getline(fileIn, dateOfBirth, ',');
            string sex;
            getline(fileIn, sex, ',');
            string phoneNumber;
            getline(fileIn, phoneNumber, ',');
            string emailAddress;
            getline(fileIn, emailAddress, ',');
            string level;
            getline(fileIn, level, ',');
            string position;
            getline(fileIn, position, ',');
            float salary;
            fileIn >> salary;
            fileIn.ignore();
            if(fileIn.eof())break;
            Employee e(idCode, namePerson, dateOfBirth, sex, idPerson, phoneNumber, emailAddress, level, position, salary);

            list.push_back(e);
        }
        fileIn.close();
    }
    else
        cout << "Deo mo duoc file!" << endl;


    return list;

}

void ReadAndWriteEmployee::writeAllEmployee(string path, list<Employee> e) {
ofstream fileOut(path, ios_base::out);
if(fileOut.is_open()) {
    cout << "Ghi file thanh cong!";
    for (Employee e: e) {
        fileOut << e.getIdCode() << "," << e.getNamePerson() << "," << e.getDateOfBirth() << "," << e.getSex() <<
                "," << e.getIdPerson() << "," << e.getPhoneNumber() << "," << e.getEmailAddress() << "," << e.getLevel()
                <<
                "," << e.getPosition() << "," << e.getSalary()<<endl;
    }
    fileOut.close();
}else
    cout << "Deo ghi duoc file fix bug di thang ngu!";
}
