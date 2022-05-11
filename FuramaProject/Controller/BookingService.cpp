//
// Created by PC on 08/05/2022.
//

#include "BookingService.h"

void BookingService::bookingService() {
    int choice;
    while (1) {
        cout << "Booking Service" << endl;
        cout << "1. Add Booking" << endl;
        cout << "2. Display Booking" << endl;
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
