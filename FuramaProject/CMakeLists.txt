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
        main.cpp model/Customer.cpp model/Customer.h model/Contract.cpp model/Contract.h controller/FuramaController.cpp controller/FuramaController.h controller/CustomerManagement.cpp controller/CustomerManagement.h controller/EmployeeManagement.cpp controller/EmployeeManagement.h controller/FacilityManagement.cpp controller/FacilityManagement.h controller/BookingManagement.cpp controller/BookingManagement.h controller/BookingService.cpp controller/BookingService.h controller/ContractService.cpp controller/ContractService.h controller/PromotionManagement.cpp controller/PromotionManagement.h service/EmployeeService.cpp service/EmployeeService.h service/CustomerService.cpp service/CustomerService.h until/ReadAndWriteEmployee.cpp until/ReadAndWriteEmployee.h until/ReadAndWriteCustomer.cpp until/ReadAndWriteCustomer.h)
