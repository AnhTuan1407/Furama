//
// Created by PC on 05/05/2022.
//

#include "Person.h"

Person::Person() {}

Person::Person(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
               const string &idPerson, const string &phoneNumber, const string &emailAddress) : idCode(idCode),
                                                                                                namePerson(namePerson),
                                                                                                dateOfBirth(
                                                                                                        dateOfBirth),
                                                                                                sex(sex),
                                                                                                idPerson(idPerson),
                                                                                                phoneNumber(
                                                                                                        phoneNumber),
                                                                                                emailAddress(
                                                                                                        emailAddress) {}

const string &Person::getIdCode() const {
    return idCode;
}

void Person::setIdCode(const string &idCode) {
    Person::idCode = idCode;
}

const string &Person::getNamePerson() const {
    return namePerson;
}

void Person::setNamePerson(const string &namePerson) {
    Person::namePerson = namePerson;
}

const string &Person::getDateOfBirth() const {
    return dateOfBirth;
}

void Person::setDateOfBirth(const string &dateOfBirth) {
    Person::dateOfBirth = dateOfBirth;
}

const string &Person::getSex() const {
    return sex;
}

void Person::setSex(const string &sex) {
    Person::sex = sex;
}

const string &Person::getIdPerson() const {
    return idPerson;
}

void Person::setIdPerson(const string &idPerson) {
    Person::idPerson = idPerson;
}

const string &Person::getPhoneNumber() const {
    return phoneNumber;
}

void Person::setPhoneNumber(const string &phoneNumber) {
    Person::phoneNumber = phoneNumber;
}

const string &Person::getEmailAddress() const {
    return emailAddress;
}

void Person::setEmailAddress(const string &emailAddress) {
    Person::emailAddress = emailAddress;
}




