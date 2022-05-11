//
// Created by PC on 08/05/2022.
//
#include "Booking.h"
#include "Facility.h"

Booking::Booking() {}

Booking::Booking(const Customer &customer, const Facility &facility, const string &idBooking, const string &startDate,
                 const string &endDate) : customer(customer), facility(facility), idBooking(idBooking),
                                          startDate(startDate), endDate(endDate) {}

void Booking::output() {
    cout << "Booking { idCustomer: " << customer.getIdCode() << ", NameCustomer: " << customer.getNamePerson() <<", Start Date: "
        << startDate << ", End Date: " << endDate << ", ";
}

const Customer &Booking::getCustomer() const {
    return customer;
}

void Booking::setCustomer(const Customer &customer) {
    Booking::customer = customer;
}

const Facility &Booking::getFacility() const {
    return facility;
}

void Booking::setFacility(const Facility &facility) {
    Booking::facility = facility;
}

const string &Booking::getIdBooking() const {
    return idBooking;
}

void Booking::setIdBooking(const string &idBooking) {
    Booking::idBooking = idBooking;
}

const string &Booking::getStartDate() const {
    return startDate;
}

void Booking::setStartDate(const string &startDate) {
    Booking::startDate = startDate;
}

const string &Booking::getEndDate() const {
    return endDate;
}

void Booking::setEndDate(const string &endDate) {
    Booking::endDate = endDate;
}
