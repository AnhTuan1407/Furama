//
// Created by Kienroro on 08/05/2022.
//

#ifndef FURAMAPROJECT_CUSTOMER_H
#define FURAMAPROJECT_CUSTOMER_H


#include "Person.h"

class Customer: public Person{
private:
public:
    const string &getTypeCustomer() const;

    void setTypeCustomer(const string &typeCustomer);

    const string &getAddress() const;

    void setAddress(const string &address);

private:
    string typeCustomer;
    string address;
public:
    Customer();

    Customer(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
           const string &idPerson, const string &phoneNumber, const string &emailAddress, const string &typeCustomer,
           const string &address);

    void output() override;

};


#endif //FURAMAPROJECT_CUSTOMER_H
