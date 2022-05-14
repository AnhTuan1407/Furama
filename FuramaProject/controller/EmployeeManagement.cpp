//
// Created by PC on 08/05/2022.
//

#include "EmployeeManagement.h"

void EmployeeManagement::employeeMenu() {
    while (1) {
        int choice;
        cout << "Employee Management" << endl;
        cout << "1. Display Employee" << endl;
        cout << "2. Add Employee" << endl;
        cout << "3. Edit Employee" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                employeeService.display();
                break;
            case 2:
                employeeService.create();
                break;
            case 3:
                break;
            case 4:
                return;
        }
    }
}
