#include "Shop.h"
#include <iostream>

Shop::Shop() : Commercial() {}

Shop::~Shop() {}

void Shop::display() {
    std::cout << "Shop - Entertainment Rating: " << entertainmentRating
              << ", Employment Rating: " << employmentRating<< "\n";
    std::cout << "**********\n";
    std::cout << "*        *\n";
    std::cout << "*  SHOP  *\n";
    std::cout << "*        *\n";
    std::cout << "**********\n";
}

void Shop::IncEmploymentRating() {
    employmentRating += 2;
}

void Shop::DecEmploymentRating() {
    employmentRating -= 1;
}

void Shop::IncEntertainmentRating() {
    entertainmentRating += 3;
}

void Shop::DecEntertainmentRating() {
    entertainmentRating -= 1;
}

void Shop::performMaintenance()  {
        std::cout << "Maintaining Shop: Checking lighting, restocking, cleaning.\n";
    }
