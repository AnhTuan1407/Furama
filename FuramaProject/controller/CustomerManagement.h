//
// Created by PC on 08/05/2022.
//
#include "FuramaController.h"
#ifndef FURAMAPROJECT_CUSTOMERMANAGEMENT_H
#define FURAMAPROJECT_CUSTOMERMANAGEMENT_H
#include "service/CustomerService.h"

class CustomerManagement {
public:
    void customerMenu();
private:
    CustomerService customerService;
};


#endif //FURAMAPROJECT_CUSTOMERMANAGEMENT_H
