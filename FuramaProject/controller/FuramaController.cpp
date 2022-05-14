//
// Created by PC on 08/05/2022.
//

#include "FuramaController.h"
#include "CustomerManagement.h"
#include "EmployeeManagement.h"
#include "FacilityManagement.h"
#include "BookingManagement.h"
#include "PromotionManagement.h"

void FuramaController::displayMainMenu()
{
    while(1) {
        int choice;
        cout << "FURAMA CONTROLLRER" << endl;
        cout << "1. Customer Management" << endl;
        cout << "2. Employee Management" << endl;
        cout << "3. Facility Management" << endl;
        cout << "4. Booking Management" << endl;
        cout << "5. Promotion Management" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your chose: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                CustomerManagement customerManagement;
                customerManagement.customerMenu();
                break;
            }
            case 2: {
                EmployeeManagement employeeManagement;
                employeeManagement.employeeMenu();
                break;
            }
            case 3:
                FacilityManagement facilityManagement;
                facilityManagement.facilityMenu();
                break;
            case 4:
                BookingManagement bookingManagement;
                bookingManagement.bookingMenu();
                break;
            case 5:
                PromotionManagement promotionManagement;
                promotionManagement.promotionManagement();
                break;
            case 6:
                exit(0);
                break;
        }
    }
};
