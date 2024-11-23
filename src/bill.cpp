// Implementation file bill.cpp
#include "../include/bill.h"
#include <iostream>
#include <iomanip>

void Bill::printBill(std::ostream& out) const {
    out << std::fixed << std::setprecision(2);
    out << "Pharmacy Charges: $";
    out << pharmacyCharges;
    out << "\nRoom Charges:     $";
    out << roomRent;
    out << "\nDoctor's Fees:    $";
    out << doctorFee;
    out << "\n______________________________";
    out << "\nTotal Charges:    $";
    out << billingAmount();
}
/*
Prints in the following format:

"Pharmacy Charges: $2.00
Room Charges:     $1.00
Doctor's Fees:    $3.55
______________________________
Total Charges:    $6.55
"

*/
        
std::string Bill::getID() const {
    return ID;
}

void Bill::setPharmacyCharges(double charges) {
    pharmacyCharges = charges;
}
double Bill::getPharmacyCharges() const {
    return pharmacyCharges;
}
void Bill::addPharmacyCharges(double charges) {
    pharmacyCharges += charges;
}

void Bill::setRoomRent(double charges) {
    roomRent = charges;
}
double Bill::getRoomRent() const {
    return roomRent;
}
void Bill::addRoomRent(double charges) {
    roomRent += charges;
}

void Bill::setDoctorFee(double charges) {
    doctorFee = charges;
}
double Bill::getDoctorFee() const {
    return doctorFee;
}
void Bill::addDoctorFee(double charges) {
    doctorFee += charges;
}

// billing amount is the sum of the three fees (Pharmacy charges, room rent, and the doctor fee).
double Bill::billingAmount() const {
    return (pharmacyCharges + roomRent + doctorFee);
}

Bill::Bill(const std::string & id, double phCharges, double rRent, double docFee)
    : ID(id), pharmacyCharges(std::move(phCharges)), roomRent(std::move(rRent)), doctorFee(std::move(docFee)) {}
