//
// Created by PC on 05/05/2022.
//
#include "../header.h"

#ifndef UNTITLED_CUSTOMER_H
#define UNTITLED_CUSTOMER_H


class Facility {
    protected:
        string idFacility;
        string nameService;
        double areaUse;
        double rentalPrice;
        int rentalMaxPeople;
        string styleRental;
public:
    Facility();

    Facility(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
             int rentalMaxPeople, const string &styleRental);

    virtual void output();

};


#endif //UNTITLED_CUSTOMER_H
