// Implementation file for patient.cpp
#include "../include/patient.h"
#include <iostream>

void Patient::print(std::ostream& out) const {
    out << "Patient: ";
    Person::print(out);
    out << "\nAttending Physician: ";
    attendingPhysician->print(out);
    out << "\nAdmit Date: ";
    admitDate.printDate(out);
    out << "\nDischarge Date: ";
    dischargeDate.printDate(out);
    out << "\n\n";
}

std::string Patient::getID() const {
    return id;
}

Date Patient::getBirthDate() const {
    return dateOfBirth;
}
void setBirthDate(const Date& date) {
    dateOfBirth = date;
}

const Doctor * Patient::getAttending() const {
    return attendingPhysician;
}
void Patient::setAttending(const Doctor * doctor) {
    attendingPhysician = doctor;
}

Date Patient::getAdmissionDate() const {
    return admitDate;
}

Date Patient::getDischargeDate() const {
    return dischargeDate;
}
void setDisDate(const Date& date) {
    dischargeDate = date;
}

std::string Patient::getNeededSpecialty() const {
    return neededSpecialty;
}
void Patient::setNeededSpecialty(const std::string & specialty) {
    neededSpecialty = specialty;
}

Patient::Patient(const std::string& id, const std::string& fName, const std::string& lName,
            const Date& birthday, 
            const Doctor * doctor, 
            const Date& admission, std::string neededSpecialty="")
    : ID(id), Person(fName, lName), dateOfBirth(birthday), attendingPhysician(doctor), admitDate(admission) {}

// keep this destructor implementation empty.
Patient::~Patient() noexcept {

}
