#include "PrivateTransport.h"
#include <iostream>
#include <memory>
void PrivateTransport::travel() {
	if (isAvailable()) {
        std::cout << "Private transport is traveling.\n";
    } else {
        std::cout << "Private transport is unavailable.\n";
    }
	
	
}

bool PrivateTransport::isAvailable()
{
    return currentState && currentState->isAvailable();
    // return getState() && getState()->isAvailable();
}

float PrivateTransport::calculateCommuteTime(float distance, float speed, const std::string& mode)
{
    // float defaultSpeed = 75.0f;
    // float timeInHours = distance / defaultSpeed;
        
        
    //     int hours = static_cast<int>(timeInHours);               
    //     int minutes = std::round((timeInHours - hours) * 60);   

        
    //     if (minutes == 60) {
    //         hours += 1;
    //         minutes = 0;
    //     }

        
    //     std::cout << "Estimated commute time: " << hours << " hours and " << minutes << " minutes.\n";
        
    //     return timeInHours;  
    if (speed <= 0) {
            if (mode == "walk") speed = 5.0f;            // Average walking speed in km/h
            else if (mode == "bike") speed = 15.0f;      // Average biking speed in km/h
            else if (mode == "car") speed = 60.0f;       // Urban driving speed in km/h
            else if (mode == "train") speed = 80.0f;     // Average train speed in km/h
            else if (mode == "plane") speed = 900.0f;    // Average cruising speed of a plane in km/h
            else speed = 50.0f;                          // Generic default speed for other modes
        }
        
        // Step 1: Calculate approximate travel time in hours as a decimal
        float timeInHours = distance / speed;
        
        // Separate hours and the decimal portion for minutes calculation
        int hours = static_cast<int>(timeInHours);               // Whole number of hours
        int minutes = std::round((timeInHours - hours) * 60);    // Decimal portion converted to minutes

        // Handle case where rounding minutes gives us 60 minutes
        if (minutes == 60) {
            hours += 1;
            minutes = 0;
        }

        // Display or return the result in hours and minutes
        std::cout << "Estimated commute time for " << mode << ": " 
                  << hours << " hours and " << minutes << " minutes.\n";
        
        return timeInHours; 
    
}

PrivateTransport::PrivateTransport(float cost, std::shared_ptr<TransportationState> state ) : ModeOfTransport(state), maintenanceCost(cost)
{
}

float PrivateTransport::getMaintenanceCost() const
{
    return maintenanceCost;
}

void PrivateTransport::setMaintenanceCost(float cost)
{
    maintenanceCost = cost;
}

// PrivateTransport::~PrivateTransport() = default;
