#include <catch_amalgamated.hpp>
#include "doctor.h"

namespace
{
  TEST_CASE("HW 5 TestsetSpecialty", "[setSpecialtyTest]")
  {
    Doctor doctor("Alfred", "Chewbacca", "Neurosurgery");
    CHECK(doctor.getSpecialty()=="Neurosurgery");
  }
}
