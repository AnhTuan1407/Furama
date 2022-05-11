//
// Created by PC on 05/05/2022.
//

#include "Villa.h"

Villa::Villa() {}

Villa::Villa(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
             int rentalMaxPeople, const string &styleRental, const string &standarVilla, double areaPool, int floor)
        : Facility(idFacility, nameService, areaUse, rentalPrice, rentalMaxPeople, styleRental),
          standarVilla(standarVilla), areaPool(areaPool), floor(floor) {}

void Villa::output() {
    Facility::output();
    cout << "Villa {idFacility: " << idFacility << ", nameService: " << nameService << ", areaUse: " << ", rentalPrice: "
         << rentalPrice << ", rentalMaxPeople: " << rentalMaxPeople << ", styleRental: " << styleRental << ", standarVilla: "
         << standarVilla << ", areaPool: " << areaPool << ", floor: " << floor << "}" << endl;

}




