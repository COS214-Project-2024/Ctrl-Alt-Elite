#include "Commercial.h"
#include <iostream>

Commercial::Commercial()  {
    this->employmentRating = 0;
    this->entertainmentRating = 0;
}




Commercial::~Commercial() {}

void Commercial::display() {
    std::cout << "Commercial Building - Entertainment Rating: " << entertainmentRating
              << ", Employment Rating: " << employmentRating << std::endl;
    std::cout << "**********\n";
    std::cout << "*        *\n";
    std::cout << "*  SHOP  *\n";
    std::cout << "*        *\n";
    std::cout << "**********\n";
}


void Commercial::IncEmploymentRating() {
   
    employmentRating += 1; 
}

void Commercial::DecEmploymentRating() {
   
    employmentRating -= 1; 
}



void Commercial::IncEntertainmentRating() {
    entertainmentRating += 1;
}

void Commercial::DecEntertainmentRating() {
    entertainmentRating -= 1;
}

int Commercial::getEmploymentRating() const {
    return employmentRating;
}

Building* Commercial::clone() const {
    return new Commercial(*this);
}

void Commercial::performMaintenance() {
    std::cout << "Performing general commercial maintenance.\n";
}
