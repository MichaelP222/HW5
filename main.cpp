 
#include <iostream>
#include <string>
#include "patient.h"
#include "bill.h"

int main() {
    std::string patientID, patientFname, patientLname, doctorFname, doctorLname, doctorSpl;
    int patientbMonth, patientbDay, patientbYear;

    std::cout << "Enter patient's ID: ";
    std::cin >> patientID;
    std::cout << std::endl;

    std::cout <<"Enter patient's first name: ";
    std::cin >> patientFname;
    std::cout << std::endl;

    std::cout << "Enter patient's last name: ";
    std::cin >> patientLname;
    std::cout << std::endl;

    std::cout << "Enter patient's birth month: ";
    std::cin >> patientbMonth;

    std::cout << "Enter patient's birth day: ";
    std::cin >> patientbDay;

    std::cout << "Enter patient's birth year: ";
    std::cin >> patientbYear;

    int hAdmMonth, hAdmDay, hAdmY;

    std::cout << "Enter today's (patient's hospital admission) month: ";
    std::cin >> hAdmMonth;

    std::cout << "Enter today's (patient's hospital admission) day: ";
    std::cin >> hAdmDay;

    std::cout << "Enter today's (patient's hospital admission) year: ";
    std::cin >> hAdmY;

    Date todaysDate(hAdmMonth, hAdmDay, hAdmY);

    Date patientFullBirth(patientbMonth, patientbDay, patientbYear);

    std::cout <<"Enter doctor's first name: ";
    std::cin >> doctorFname;
    std::cout << std::endl;

    std::cout << "Enter doctor's last name: ";
    std::cin >> doctorLname;
    std::cout << std::endl;

    std::cout << "Enter doctor's speciality: ";
    std::cin >> doctorSpl;
    std::cout << std::endl;

    Doctor newDoctor(doctorFname, doctorLname, doctorSpl);

    // TODO: explain in README doctor needs to be a pointer
    Patient newPatient(patientID, patientFname, patientLname, patientFullBirth, &newDoctor, todaysDate);

    newPatient.setNeededSpecialty(doctorSpl);

    std::cout << "Enter patient's hospital discharge month: ";
    std::cin >> hAdmMonth;

    std::cout << "Enter patient's hospital discharge day: ";
    std::cin >> hAdmDay;

    std::cout << "Enter patient's hospital discharge year: ";
    std::cin >> hAdmY;
    newPatient.setDisDate({ hAdmMonth, hAdmDay, hAdmY });

    // TODO: explain in readme that there are no setters and only getters
    // and explain the design choice from a software engineering perspective for it.
    Bill bill("11113", 245.50, 2500, 3500.38);

    newPatient.print(std::cout);
    bill.printBill(std::cout);
    
    return 0;
}
