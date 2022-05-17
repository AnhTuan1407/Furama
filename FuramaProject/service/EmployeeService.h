//
// Created by PC on 13/05/2022.
//

#ifndef FURAMAPROJECT_EMPLOYEESERVICE_H
#define FURAMAPROJECT_EMPLOYEESERVICE_H


#include <list>
#include "../model/Employee.h"
#include "until/ReadAndWriteEmployee.h"

class EmployeeService {
public:
    void display();
    void create();
    void edit();
private:
    list<Employee> listEmployee;

};


#endif //FURAMAPROJECT_EMPLOYEESERVICE_H
