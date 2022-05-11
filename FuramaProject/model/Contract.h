//
// Created by PC on 08/05/2022.
//
#include "../header.h"
#include "Customer.h"
#include "Booking.h"

#ifndef FURAMAPROJECT_CONTRACT_H
#define FURAMAPROJECT_CONTRACT_H


class Contract {
private:
    Booking booking;
    string idContract;
    double prePayment;
    double totalPayment;
    Customer customer;
public:
    Contract();

    Contract(const Booking &booking, const string &idContract, double prePayment, double totalPayment,
             const Customer &customer);
};


#endif //FURAMAPROJECT_CONTRACT_H
