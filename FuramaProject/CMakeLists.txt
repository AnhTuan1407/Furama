cmake_minimum_required(VERSION 3.21)
project(FuramaProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(model)

add_executable(FuramaProject
        model/Booking.cpp
        model/Booking.h
        model/Employee.cpp
        model/Employee.h
        model/Facility.cpp
        model/Facility.h
        model/House.cpp
        model/House.h
        model/Person.cpp
        model/Person.h
        model/Room.cpp
        model/Room.h
        model/Villa.cpp
        model/Villa.h
        header.h
        main.cpp model/Customer.cpp model/Customer.h model/Contract.cpp model/Contract.h Controller/FuramaController.cpp Controller/FuramaController.h Controller/CustomerManagement.cpp Controller/CustomerManagement.h Controller/EmployeeManagement.cpp Controller/EmployeeManagement.h Controller/FacilityManagement.cpp Controller/FacilityManagement.h Controller/BookingManagement.cpp Controller/BookingManagement.h Controller/BookingService.cpp Controller/BookingService.h Controller/ContractService.cpp Controller/ContractService.h Controller/PromotionManagement.cpp Controller/PromotionManagement.h)
