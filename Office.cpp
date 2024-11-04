#include "Office.h"
#include <iostream>

Office::Office() : Commercial() {}

Office::~Office() {}

void Office::display() {
    std::cout << "Office - Entertainment Rating: " << entertainmentRating
              << ", Employment Rating: " << employmentRating << "\n";
    std::cout << "************\n";
    std::cout << "*          *\n";
    std::cout << "*  OFFICE  *\n";
    std::cout << "*          *\n";
    std::cout << "************\n";
}

void Office::IncEmploymentRating() {
    employmentRating += 4;
}

void Office::DecEmploymentRating() {
    employmentRating -= 1;
}

void Office::IncEntertainmentRating() {
    entertainmentRating += 1;
}

void Office::DecEntertainmentRating() {
    entertainmentRating -= 1;
}

void Office::performMaintenance() {
        std::cout << "Maintaining Shop: Checking lighting, restocking, cleaning.\n";
    }
