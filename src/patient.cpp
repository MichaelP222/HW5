// Implementation file for patient.cpp
#include "../include/patient.h"
#include <iostream>

Patient::Patient(const std::string& id, const std::string& fName, const std::string& lName,
            const Date& birthday, 
            const Doctor * doctor, 
            const Date& admission, std::string neededSpecialty)
    : Person(fName, lName), ID(id), dateOfBirth(birthday), attendingPhysician(doctor), 
    neededSpecialty(std::move(neededSpecialty)), admitDate(admission) {}

void Patient::print(std::ostream& out) const {
    out << "Patient: ";
    Person::print(out);
    out << "\nAttending Physician: ";
    if (attendingPhysician != nullptr){
        attendingPhysician->print(out);
    }
    out << "\nAdmit Date: ";
    admitDate.printDate(out);
    out << "\nDischarge Date: ";
    dischargeDate.printDate(out);
    out << "\n\n";
}

std::string Patient::getID() const {
    return ID;
}

Date Patient::getBirthDate() const {
    return dateOfBirth;
}
void Patient::setBirthDate(const Date& date) {
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
void Patient::setDisDate(const Date& date) {
    dischargeDate = date;
}

std::string Patient::getNeededSpecialty() const {
    return neededSpecialty;
}
void Patient::setNeededSpecialty(const std::string & specialty) {
    neededSpecialty = specialty;
}

// keep this destructor implementation empty.
Patient::~Patient() noexcept {

}
