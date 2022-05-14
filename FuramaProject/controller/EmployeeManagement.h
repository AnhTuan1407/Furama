//
// Created by PC on 08/05/2022.
//

#ifndef FURAMAPROJECT_EMPLOYEEMANAGEMENT_H
#define FURAMAPROJECT_EMPLOYEEMANAGEMENT_H

#include "../header.h"
#include "service/EmployeeService.h"

class EmployeeManagement {
public:
    void employeeMenu();
private:
    EmployeeService employeeService;
};


#endif //FURAMAPROJECT_EMPLOYEEMANAGEMENT_H
