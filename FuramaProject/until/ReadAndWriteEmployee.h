//
// Created by PC on 13/05/2022.
//

#ifndef FURAMAPROJECT_READANDWRITEEMPLOYEE_H
#define FURAMAPROJECT_READANDWRITEEMPLOYEE_H


#include <list>
#include <string>
#include "../model/Employee.h"

class ReadAndWriteEmployee {
public:
    list<Employee> readAllEmployee(string path);
    void writeAllEmployee(string path, list<Employee> e);
};


#endif //FURAMAPROJECT_READANDWRITEEMPLOYEE_H
