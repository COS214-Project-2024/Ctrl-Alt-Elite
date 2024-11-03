#include "Shop.h"
#include <iostream>

Shop::Shop() : Commercial() {}

Shop::~Shop() {}

void Shop::display() const {
    std::cout << "Shop - Entertainment Rating: " << entertainmentRating
              << ", Employment Rating: " << employmentRating
              << ", Revenue: $" << revenue << "\n";
}

void Shop::updateEmploymentRating() {
    employmentRating += 2; 
}


void Shop::updateEntertainmentRating() {
    entertainmentRating += 3; 
}
