 
#ifndef H_doctorType
#define H_doctorType

#include <string>
#include <ostream>
#include "person.h"

class Doctor : public Person
{
public:
    void print(std::ostream& out) const override;
	// Prints the Doctor's Person attributes, followed by their speciality:
	// Person information... + " specialty"
	// Note a newline is not printed and space is prepended.

    void setSpecialty(const std::string& spl); 
    std::string getSpecialty() const;

    // Constructor
    Doctor(const std::string& first, const std::string& last, const std::string& spl);


 private:
    std::string specialty; 
};

#endif
