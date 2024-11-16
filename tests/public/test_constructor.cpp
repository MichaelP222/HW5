#include <catch_amalgamated.hpp>
#include "bill.h"
#include "patient.h"
#include "date.h"
#include "doctor.h"

namespace {
  TEST_CASE("HW 5 Constructor Bill Test 1", "[basicConstructorbillType]") {
    Bill bill("12345", 67.59, 3500, 900);
    CHECK(bill.getPharmacyCharges() == 67.59);
    CHECK(bill.getRoomRent() == 3500);
    CHECK(bill.getDoctorFee() == 900);
  }
  
  TEST_CASE("HW 5 Constructor Bill Test 2", "[basicConstructordateType]") {
    Date date(4, 18, 2023);
    CHECK(date.getMonth() == 4);
    CHECK(date.getDay() == 18);
    CHECK(date.getYear() == 2023);
  }

  TEST_CASE("HW 5 Constructor Bill Test 3", "[basicConstructordoctorType]") {
    Doctor doctor("Bob", "Doe", "Cardiology");
    CHECK(doctor.getFirstName() == "Bob");
    CHECK(doctor.getLastName() == "Doe");
    CHECK(doctor.getSpecialty() == "Cardiology");
  }

  TEST_CASE("HW 5 Constructor Bill Test 4", "[basicConstructorpatientType]") {
    Doctor doc{"Joseph", "McLauren", "Nephrology"};
    Date discharge{5,26,2023};
    Date bday{3, 24, 1976};
    Date admday{3, 24, 1976};
    Patient patient("55523", "Fred", "Wilbur", bday, &doc, admday, "Oncology");
    
    CHECK(patient.getID() == "55523");
    CHECK(patient.getFirstName() == "Fred");
    CHECK(patient.getLastName() == "Wilbur");
    CHECK(patient.getBirthDate() == bday);
    CHECK(patient.getAttending() == &doc);
    CHECK(patient.getAdmissionDate() == admday);
    CHECK(patient.getNeededSpecialty() == "Oncology");
  }
}
