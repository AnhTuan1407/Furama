//
// Created by PC on 05/05/2022.
//

#include "Employee.h"


Employee::Employee() {}

Employee::Employee(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
                   const string &idPerson, const string &phoneNumber, const string &emailAddress, const string &level,
                   const string &position, float salary) : Person(idCode, namePerson, dateOfBirth, sex, idPerson,
                                                                  phoneNumber, emailAddress), level(level),
                                                           position(position), salary(salary) {}

void Employee::output() {
    cout << "Employee { idCode: " << idCode << ", namePerson: " << namePerson << ", dateOfBirth: " << dateOfBirth <<
         ", sex: " << sex << ", idPerson: " << idPerson << ", phoneNumber: " << phoneNumber << ", emailAddress: " <<
         emailAddress << ", level: " << level << ", position: " << position << ", salary: " << salary << " }" << endl;
}

const string &Employee::getLevel() const {
    return level;
}

void Employee::setLevel(const string &level) {
    Employee::level = level;
}

const string &Employee::getPosition() const {
    return position;
}

void Employee::setPosition(const string &position) {
    Employee::position = position;
}

float Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(float salary) {
    Employee::salary = salary;
}
