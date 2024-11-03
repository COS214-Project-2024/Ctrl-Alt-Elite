#include "Mall.h"
#include <iostream>

Mall::Mall() : Commercial() {}

Mall::~Mall() {}

void Mall::display() const {
    std::cout << "Mall - Entertainment Rating: " << entertainmentRating
              << ", Employment Rating: " << employmentRating
              << ", Revenue: $" << revenue << "\n";
}

void Mall::updateEmploymentRating() {
    employmentRating += 5; 
}

void Mall::updateEntertainmentRating() {
    entertainmentRating += 7; 
}
