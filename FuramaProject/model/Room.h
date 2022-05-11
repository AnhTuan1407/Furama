//
// Created by PC on 05/05/2022.
//

#ifndef UNTITLED_ROOM_H
#define UNTITLED_ROOM_H


#include "Facility.h"

class Room : public Facility{
private:
    string freeService;
public:
    Room();

    Room(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
         const string &styleRental, const string &freeService);

    void output() override;



};


#endif //UNTITLED_ROOM_H
