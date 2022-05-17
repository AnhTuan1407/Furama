//
// Created by PC on 13/05/2022.
//

#ifndef FURAMAPROJECT_CUSTOMERSERVICE_H
#define FURAMAPROJECT_CUSTOMERSERVICE_H


#include <list>
#include "Customer.h"
#include "until/ReadAndWriteCustomer.h"

class CustomerService {
public:
    void display();
    void create();
    void edit();
private:
    list<Customer> listCustomer;
};


#endif //FURAMAPROJECT_CUSTOMERSERVICE_H
