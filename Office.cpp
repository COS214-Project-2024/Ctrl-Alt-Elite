#include "Office.h"
#include <iostream>

Office::Office() : Commercial() {}

Office::~Office() {}

void Office::display() const {
    std::cout << "Office - Entertainment Rating: " << entertainmentRating
              << ", Employment Rating: " << employmentRating
              << ", Revenue: $" << revenue << "\n";
}

void Office::updateEmploymentRating() {
    employmentRating += 4; 
}

void Office::updateEntertainmentRating() {
    entertainmentRating += 1; 
}
