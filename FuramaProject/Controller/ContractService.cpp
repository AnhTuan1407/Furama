//
// Created by PC on 08/05/2022.
//

#include "ContractService.h"

void ContractService::contractService() {
    int choice;
    while (1) {
        cout << "Contract Service" << endl;
        cout << "1. Create Contract" << endl;
        cout << "2. Display Contract" << endl;
        cout << "3. Edit Contract" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                return;
        }
    }
}
