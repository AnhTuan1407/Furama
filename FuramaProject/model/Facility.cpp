//
// Created by PC on 05/05/2022.
//

#include "Facility.h"

Facility::Facility() {}

Facility::Facility(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
                   int rentalMaxPeople, const string &styleRental) : idFacility(idFacility), nameService(nameService),
                                                                     areaUse(areaUse), rentalPrice(rentalPrice),
                                                                     rentalMaxPeople(rentalMaxPeople),
                                                                     styleRental(styleRental) {}

void Facility::output() {

}


