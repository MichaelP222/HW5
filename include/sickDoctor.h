#ifndef SICK_DOCTOR_H
#define SICK_DOCTOR_H

#include "patient.h"
#include "doctor.h"

class SickDoctor : public Patient, public Doctor {
public:

    SickDoctor(const std::string & id, const std::string& fname, const std::string & lname, 
        const std::string & self_specialty, const std::string & requested_specialty,
        Date birthday, Date admission);
    bool canSelfTreat() const;
};

#endif