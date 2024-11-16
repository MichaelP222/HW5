 
#ifndef H_patientType
#define H_patientType

#include <iosfwd>
#include <string>
#include "doctor.h"
#include "person.h"
#include "date.h"
 
class Patient : public Person
{
public: 
    void print(std::ostream& out) const override;
	/* Prints headers and makes calls to each type's respective print methods.
	Prints the data in this format:
	
	"Patient: <Person Data>
    Attending Physician: <Doctor Data>
    Admit Date: <admitDate>
    Discharge Date: <dischargeDate>
	
	"
	Note two newlines are printed at the end.
	*/

    std::string getID() const;

    Date getBirthDate() const;
    void setBirthDate(const Date& date);

    const Doctor * getAttending() const;
    void setAttending(const Doctor * doctor);
    
    Date getAdmissionDate() const;
    
    Date getDischargeDate() const;
    void setDisDate(const Date& date);
    
    std::string getNeededSpecialty() const;
    void setNeededSpecialty(const std::string & specialty);

    Patient(const std::string& id, const std::string& fName, const std::string& lName,
                const Date& birthday, 
                const Doctor * doctor, 
                const Date& admission, std::string neededSpecialty="");
   
    ~Patient() noexcept override;

 private:
    std::string ID;
    Date dateOfBirth;
    const Doctor * attendingPhysician;
    std::string neededSpecialty;
    Date admitDate;
    Date dischargeDate; 
};

#endif