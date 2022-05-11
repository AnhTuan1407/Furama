//
// Created by PC on 05/05/2022.
//

#ifndef UNTITLED_HOUSE_H
#define UNTITLED_HOUSE_H


#include "Facility.h"

class House : public Facility {
private:
    string standarHouse;
    int floor;
public:
    House();

    House(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
          const string &styleRental, const string &standarHouse, int floor);

    void output() override;

};


#endif //UNTITLED_HOUSE_H
