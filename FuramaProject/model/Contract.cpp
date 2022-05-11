//
// Created by PC on 08/05/2022.
//

#include "Contract.h"

Contract::Contract() {}

Contract::Contract(const Booking &booking, const string &idContract, double prePayment, double totalPayment,
                   const Customer &customer) : booking(booking), idContract(idContract), prePayment(prePayment),
                                               totalPayment(totalPayment), customer(customer) {}
