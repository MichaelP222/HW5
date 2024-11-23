// Implementation file date.cpp
#include "../include/date.h"
#include <iostream>

int Date::getDay() const {
    return dDay;
}

int Date::getMonth() const {
    return dMonth;
}

int Date::getYear() const {
    return dYear;
}

void Date::printDate(std::ostream& out) const {
    out << dMonth << "-" << dDay << "-" << dYear;
}

Date::Date(int month, int day, int year)
    : dMonth(month), dDay(day), dYear(year) {}

bool Date::operator==(const Date& other) const noexcept {
    return (dMonth == other.dMonth && dDay == other.dDay && dYear == other.dYear);
}
