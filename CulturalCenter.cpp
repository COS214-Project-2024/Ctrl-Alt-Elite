#include "CulturalCenter.h"
#include <iostream>

CulturalCenter::CulturalCenter() : Landmarks() {}

CulturalCenter::~CulturalCenter() {}

void CulturalCenter::display() const {
    std::cout << "Cultural Center - Entertainment Rating: " << entertainmentRating
              << ", Maintenance Cost: " << maintenanceCost << "\n";
}

void CulturalCenter::updateEntertainmentRating() {
    entertainmentRating += 7;
}
