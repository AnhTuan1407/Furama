//
// Created by PC on 05/05/2022.
//

#ifndef UNTITLED_EMPLOYEE_H
#define UNTITLED_EMPLOYEE_H

#include "Person.h"

class Employee : public Person {
private:
public:
    const string &getLevel() const;

    void setLevel(const string &level);

    const string &getPosition() const;

    void setPosition(const string &position);

    float getSalary() const;

    void setSalary(float salary);

private:
    string level;
    string position;
    float salary;
public:
    Employee();

    Employee(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
             const string &idPerson, const string &phoneNumber, const string &emailAddress, const string &level,
             const string &position, float salary);

    void output() override;
};


#endif //UNTITLED_EMPLOYEE_H
