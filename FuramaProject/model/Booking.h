//
// Created by PC on 08/05/2022.
//

#ifndef UNTITLED_BOOKING_H
#define UNTITLED_BOOKING_H


#include "Customer.h"
#include "Facility.h"


class Booking {
private:
    Customer customer;
    Facility facility;
    string idBooking;
    string startDate;
    string endDate;
public:
    const Customer &getCustomer() const;

    void setCustomer(const Customer &customer);

    const Facility &getFacility() const;

    void setFacility(const Facility &facility);

    const string &getIdBooking() const;

    void setIdBooking(const string &idBooking);

    const string &getStartDate() const;

    void setStartDate(const string &startDate);

    const string &getEndDate() const;

    void setEndDate(const string &endDate);

public:
    Booking();

    Booking(const Customer &customer, const Facility &facility, const string &idBooking, const string &startDate,
            const string &endDate);

    void output();
};


#endif //UNTITLED_BOOKING_H
