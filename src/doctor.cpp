// Implementation file doctor.cpp
#include "../include/doctor.h"
#include <iostream>

Doctor::Doctor(const std::string& first, const std::string& last, const std::string& spl)
    : Person(first, last), specialty(spl) {}

void Doctor::setSpecialty(const std::string& spl) {
    specialty = spl;
}

std::string Doctor::getSpecialty() const {
    return specialty;
}

void Doctor::print(std::ostream& out) const {
    Person::print(out);
    out << " " << specialty;
}