//
// Created by PC on 08/05/2022.
//

#include "CustomerManagement.h"

void CustomerManagement::customerMenu() {
    while (1) {
        int choice;
        cout << "Customer Management." << endl;
        cout << "1. Display Customer" << endl;
        cout << "2. Add Customer" << endl;
        cout << "3. Edit Customer" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                customerService.display();
                break;
            case 2:
                customerService.create();
                break;
            case 3:
                break;
            case 4:
                return;
        }
    }
}
