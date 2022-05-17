//
// Created by PC on 13/05/2022.
//

#ifndef FURAMAPROJECT_READANDWRITECUSTOMER_H
#define FURAMAPROJECT_READANDWRITECUSTOMER_H


#include <list>
#include <string>
#include "../model/Customer.h"

class ReadAndWriteCustomer {
public:
    list<Customer> realAllCustomer(string path);
    void writeAllCustomer(string path, list<Customer> c);
};


#endif //FURAMAPROJECT_READANDWRITECUSTOMER_H
