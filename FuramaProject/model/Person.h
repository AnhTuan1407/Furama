//
// Created by PC on 05/05/2022.
//
#include "../header.h"
#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H


class Person {
    protected:
        string idCode;
public:
    const string &getIdCode() const;

    void setIdCode(const string &idCode);

    const string &getNamePerson() const;

    void setNamePerson(const string &namePerson);

    const string &getDateOfBirth() const;

    void setDateOfBirth(const string &dateOfBirth);

    const string &getSex() const;

    void setSex(const string &sex);

    const string &getIdPerson() const;

    void setIdPerson(const string &idPerson);

    const string &getPhoneNumber() const;

    void setPhoneNumber(const string &phoneNumber);

    const string &getEmailAddress() const;

    void setEmailAddress(const string &emailAddress);

protected:
    string namePerson;
        string dateOfBirth;
        string sex;
        string idPerson;
        string phoneNumber;
        string emailAddress;
    public:

        Person();

        Person(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
               const string &idPerson, const string &phoneNumber, const string &emailAddress);

        virtual void output() = 0;
};



#endif //UNTITLED_PERSON_H
