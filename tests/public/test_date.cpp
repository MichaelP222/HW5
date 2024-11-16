#include <catch_amalgamated.hpp>
#include "date.h"

namespace {
  TEST_CASE("HW 5 Constructor Set Date Test 1", "[setDateTest]") {
    const Date date(4, 20, 2023);

    CHECK(date.getMonth() == 4);
    CHECK(date.getDay() == 20);
    CHECK(date.getYear() == 2023);

    std::stringstream ss;
    date.printDate(ss);
    CHECK(ss.str() == "4-20-2023");
  }
}