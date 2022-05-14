//
// Created by PC on 08/05/2022.
//

#include "PromotionManagement.h"

void PromotionManagement::promotionManagement() {
    int choice;
    while (1) {
        cout << "Promotion Management" << endl;
        cout << "1. Display Promotion" << endl;
        cout << "2. List get Voucher" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                return;
        }
    }
}
