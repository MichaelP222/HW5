#include <catch_amalgamated.hpp>
#include "bill.h"

namespace {
  TEST_CASE("HW 5 Billing Test 1", "[billingAmountTest]") {
    Bill bill("12345", 35.68, 1500, 750);
    CHECK_THAT(bill.billingAmount(), Catch::Matchers::WithinAbs(2285.68, 0.001));
  }

  TEST_CASE("HW 5 Billing Test 2", "[setInfoTest]") {
    Bill bill("22233", 45.79, 890, 430);

    CHECK(bill.getID() == "22233");
    
    CHECK_THAT(bill.getPharmacyCharges(), Catch::Matchers::WithinAbs(45.79, 0.001));
    CHECK_THAT(bill.getRoomRent(), Catch::Matchers::WithinAbs(890, 0.001));
    CHECK_THAT(bill.getDoctorFee(), Catch::Matchers::WithinAbs(430, 0.001));
  }

  TEST_CASE("HW 5 Billing Test 4", "[setPharmacyChargesTest]") {
    Bill bill("22222", 33.00, 1000, 760);
    bill.setPharmacyCharges(89.90);

    CHECK_THAT(bill.getPharmacyCharges(), Catch::Matchers::WithinAbs(89.90, .001));
  }

  TEST_CASE("HW 5 Billing Test 5", "[updatePharmacyChargesTest]") {
    Bill bill("11111", 10.00, 250, 150);
    bill.addPharmacyCharges(12.00);

    CHECK_THAT(bill.getPharmacyCharges(), Catch::Matchers::WithinAbs(22, 0.001));
  }

  TEST_CASE("HW 5 Billing Test 6", "[setRoomRentTest]") {
    Bill bill("10000", 14.50, 100, 75);
    bill.setRoomRent(150);

    CHECK_THAT((bill.getRoomRent()), Catch::Matchers::WithinAbs(150, 0.001));
  }

  TEST_CASE("HW 5 Billing Test 7", "[updateRoomRentTest]") {
    Bill bill("20031", 7.80, 44, 200);
    bill.addRoomRent(25);

    CHECK_THAT(bill.getRoomRent(), Catch::Matchers::WithinAbs(69, 0.001));
  }

  TEST_CASE("HW 5 Billing Test 8", "[setDoctorFeeTest]") {
    Bill bill("67890", 78.43, 32.00, 17.00);
    bill.setDoctorFee(300.50);

    CHECK_THAT(bill.getDoctorFee(), Catch::Matchers::WithinAbs(300.50, 0.001));
  }

  TEST_CASE("HW 5 Billing Test 9", "[updateDoctorFeeTest]") {
    Bill bill("64324", 6.75, 25.00, 43.00);
    bill.addDoctorFee(210.00);

    CHECK_THAT(bill.getDoctorFee(), Catch::Matchers::WithinAbs(253.00, 0.001));
  }
}