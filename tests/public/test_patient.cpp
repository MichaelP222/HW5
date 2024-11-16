#include <catch_amalgamated.hpp>
#include "patient.h"

namespace
{

  TEST_CASE("HW 5 Test Constructor", "[constructorTest]")
  { 
    Doctor d{"Puja", "Singh", "Neonatal"};
    Patient patient("4677", "Thomas", "William", Date{7, 29, 2023}, 
    &d, Date{12, 14, 2023}, "");
    
    CHECK(patient.getID() == "4677");
    CHECK(patient.getBirthDate().getDay() == 29);
    CHECK(patient.getBirthDate().getMonth() == 7);
    CHECK(patient.getBirthDate().getYear() == 2023);

    CHECK(patient.getAttending() == &d);
    CHECK(patient.getNeededSpecialty() == "");

    CHECK(patient.getAdmissionDate().getDay() == 14);
    CHECK(patient.getAdmissionDate().getMonth() == 12);
    CHECK(patient.getAdmissionDate().getYear() == 2023);
  }

  TEST_CASE("HW 5 Test setDoctorName", "[setDoctorNameTest]")
  {
    Patient patient("4677", "Thomas", "William", Date{7, 29, 2023}, nullptr, Date{12, 14, 2023}, "Nephrology");
    CHECK(patient.getAttending() == nullptr);

    Doctor d{"Gregory", "House", "Infectious Disease"};
    patient.setAttending(&d);
    CHECK(patient.getAttending() == &d);
  }

  TEST_CASE("HW 5 setRequired", "[setDoctorSplTest]")
  {
    Patient patient("4677", "Thomas", "William", Date{7, 29, 2023}, nullptr, Date{12, 14, 2023}, "Cardiology");
    CHECK(patient.getNeededSpecialty() == "Cardiology");

    patient.setNeededSpecialty("Neurology");
    CHECK(patient.getNeededSpecialty() == "Neurology");
  }

  TEST_CASE("HW 5 setDisDate", "[setDisDateTest]")
  {
    Patient patient("4677", "Thomas", "William", Date{7, 29, 2023}, nullptr, Date{12, 14, 2023}, "Nephrology");
    CHECK(patient.getDischargeDate() == Date{0, 0, 0});

    patient.setDisDate({4, 1, 2021});
    CHECK(patient.getDischargeDate().getDay() == 1);
    CHECK(patient.getDischargeDate().getMonth() == 4);
    CHECK(patient.getDischargeDate().getYear() == 2021);
  }
}