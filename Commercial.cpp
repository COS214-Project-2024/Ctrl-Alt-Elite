#include "Commercial.h"
#include <iostream>

Commercial::Commercial() : entertainmentRating(0), employmentRating(0), revenue(0.0f) {}

Commercial::~Commercial() {}

void Commercial::display() const {
    std::cout << "Commercial Building - Entertainment Rating: " << entertainmentRating
              << ", Employment Rating: " << employmentRating
              << ", Revenue: $" << revenue << "\n";
}

void Commercial::updateEmploymentRating() {
    // update employment rating
    employmentRating += 1; 
}

void Commercial::updateEntertainmentRating() {
    // update entertainment rating
    entertainmentRating += 1;
}

int Commercial::getEmploymentRating() const {
    return employmentRating;
}

Building* Commercial::clone() const {
    return new Commercial(*this);
}
