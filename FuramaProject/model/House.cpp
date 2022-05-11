//
// Created by PC on 05/05/2022.
//

#include "House.h"

House::House() {}

House::House(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
             int rentalMaxPeople, const string &styleRental, const string &standarHouse, int floor) : Facility(
        idFacility, nameService, areaUse, rentalPrice, rentalMaxPeople, styleRental), standarHouse(standarHouse),
                                                                                                      floor(floor) {}

void House::output() {

    cout << "House {idFacility: " << idFacility << ", nameService: " << nameService <<  ", areaUse: "
    << areaUse << ", rentalPrice: " << rentalPrice << ", rentalMaxPeople: " << rentalMaxPeople
    << ", styleRental: " << styleRental << ", standarHouse: " << standarHouse << "}" << endl;
}




