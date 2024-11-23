// Implementation file person.cpp
#include "../include/person.h"
#include <iostream>
#include <string>

Person::Person(const std::string & first, const std::string & last)
    : firstName(first), lastName(last) {}

string Person::getFirstName() const {
    return firstName;
}

string Person::getLastName() const {
    return lastName;
}

void print(std::ostream &os) const {
    os << firstName << " " << lastName;
}
