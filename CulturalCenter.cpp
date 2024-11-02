#include "CulturalCenter.h"
#include <iostream>

CulturalCenter::CulturalCenter() : Landmarks() {}

CulturalCenter::~CulturalCenter() {}

void CulturalCenter::display()  {
    std::cout << "Cultural Center - Entertainment Rating: " << entertainmentRating
              << ", Maintenance Cost: " << maintenanceCost << "\n";
    std::cout << "   * * * * *\n";
    std::cout << "  * CULTURE *\n";
    std::cout << " *  CENTER   *\n";
    std::cout << "* * * * * * *\n";
}

void CulturalCenter::updateEntertainmentRating() {
    entertainmentRating += 7;
}

void CulturalCenter::performMaintenance(){
    std::cout << "Maintaining Cultural Center: Checking exhibits, visitor facilities.\n";
}
