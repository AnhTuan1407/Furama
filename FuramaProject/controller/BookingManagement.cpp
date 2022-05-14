//
// Created by PC on 08/05/2022.
//

#include "BookingManagement.h"
#include "BookingService.h"
#include "ContractService.h"

void BookingManagement::bookingMenu() {
    int choice;
    cout << "Booking Management" << endl;
    cout << "1. Booking Service" << endl;
    cout << "2. Contract Service" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            BookingService bookingService;
            bookingService.bookingService();
            break;
        case 2:
            ContractService contractService;
            contractService.contractService();
            break;
        case 3:
            break;
    }
}
