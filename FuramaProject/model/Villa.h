//
// Created by PC on 05/05/2022.
//

#ifndef UNTITLED_VILLA_H
#define UNTITLED_VILLA_H


#include "Facility.h"

class Villa : public Facility{
private:
    string standarVilla;
    double areaPool;
    int floor;
public:
    Villa();

    Villa(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
          const string &styleRental, const string &standarVilla, double areaPool, int floor);


    void output() override;

};


#endif //UNTITLED_VILLA_H
