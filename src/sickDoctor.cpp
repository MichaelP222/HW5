// Implementation file sickDoctor.cpp
#include "../include/sickDoctor.h"

SickDoctor::SickDoctor(const std::string & id, const std::string& fname, const std::string & lname, 
        const std::string & self_specialty, const std::string & requested_specialty,
        Date birthday, Date admission)
        : Patient(id, fname, lname, birthday, this, admission, requested_specialty), 
        Doctor(fname, lname, self_specialty) {}


bool SickDoctor::canSelfTreat() const {
    return getSpecialty() == getNeededSpecialty();
}