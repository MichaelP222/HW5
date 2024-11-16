#include <catch_amalgamated.hpp>
#include "sickDoctor.h"

namespace
{
  TEST_CASE("HW 5 Test Sick Doctor Self Treatable", "[sickDoctorTypeTest]")
  {
    SickDoctor sick_doctor("0001", "Alfred", "Chewbacca", "Neurosurgery", "Nephrology", Date{2, 13, 1969}, Date{5, 11, 2022});
    CHECK_FALSE(sick_doctor.canSelfTreat());
  }
  
  TEST_CASE("HW 5 Test Sick Doctor Self Treatable 2", "[sickDoctorTypeTest]")
  {
    SickDoctor sick_doctor("1234", "Jimothy", "Stefano", "Orthopedics", "Orthopedics", Date{8, 16, 1973}, Date{6, 12, 2024});
    CHECK(sick_doctor.canSelfTreat());
  }
}
