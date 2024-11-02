#include "Mall.h"
#include <iostream>

Mall::Mall() : Commercial() {}

Mall::~Mall() {}

void Mall::display() {
    std::cout << "Mall - Entertainment Rating: " << entertainmentRating
              << ", Employment Rating: " << employmentRating<< "\n";
    std::cout << "******************\n";
    std::cout << "*                *\n";
    std::cout << "*      MALL      *\n";
    std::cout << "*                *\n";
    std::cout << "******************\n";
}

void Mall::IncEmploymentRating() {
    employmentRating += 5;
}

void Mall::DecEmploymentRating() {
    employmentRating -= 2;
}

void Mall::IncEntertainmentRating() {
    entertainmentRating += 7;
}

void Mall::DecEntertainmentRating() {
    entertainmentRating -= 2;
}

void Mall::performMaintenance() {
        std::cout << "Maintaining Shop: Checking lighting, restocking, cleaning.\n";
    }
