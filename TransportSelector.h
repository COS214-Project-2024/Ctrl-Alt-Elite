
// #ifndef TRANSPORTSELECTOR_H
// #define TRANSPORTSELECTOR_H

// #include <iostream>
// #include <memory>
// #include "Bus.h"
// #include "Train.h"
// #include "Taxi.h"
// #include "Plane.h"
// #include "Car.h"
// #include "Bike.h"
// #include "Walk.h"
// #include "BusyState.h"
// #include "QuietState.h"
// #include "ModerateState.h"
// #include "Citizen.h"

// class TransportSelector {
// private:
//     std::shared_ptr<TransportStrategy> selectedTransport;
//     std::shared_ptr<TransportationState> currentState;
//     Citizen citizen{"John Doe"};  // Test Citizen

// public:

//     void runTests() {
//         int action;
//         do {
//             std::cout << "\nSelect an action:\n"
//                       << "1. Choose Transport Mode\n"
//                       << "2. Set Transport State\n"
//                       << "3. Test Commute Time\n"
//                       << "4. Check Availability\n"
//                       << "5. Citizen Travel\n"
//                       << "6. Display Citizen Info\n"
//                       << "7. Update Satisfaction\n"
//                       << "0. Exit\n";
//             std::cin >> action;

//             switch (action) {
//                 case 1: chooseTransportMode(); break;
//                 case 2: setState(); break;
//                 case 3: testCommuteTime(); break;
//                 case 4: checkAvailability(); break;
//                 case 5: travelCitizen(); break;
//                 case 6: citizen.displayInfo(); break;
//                 case 7: updateSatisfaction(); break;
//                 case 0: std::cout << "Exiting tests.\n"; break;
//                 default: std::cout << "Invalid action.\n"; break;
//             }
//         } while (action != 0);
//     }

//     void chooseTransportMode() {
//         int type, index;
//         std::cout << "Choose mode type:\n1. Public Transport\n2. Private Transport\n";
//         std::cin >> type;

//         if (type == 1) {
//             choosePublicTransport();
//         } else if (type == 2) {
//             choosePrivateTransport();
//         } else {
//             std::cout << "Invalid type.\n";
//             return;
//         }

//         std::cout << "Assign transport to which slot (0-2) in citizen’s preferred modes? ";
//         std::cin >> index;
//         if (index >= 0 && index < 3) {
//             citizen.setTransportStrategy(selectedTransport, index);
//         } else {
//             std::cout << "Invalid slot.\n";
//         }
//     }

//     void choosePublicTransport() {
//         int option;
//         std::cout << "Choose Public Transport:\n1. Bus\n2. Train\n3. Taxi\n4. Plane\n";
//         std::cin >> option;

//         switch (option) {
//             case 1:
//                 selectedTransport = std::make_shared<Bus>(50, 10, 1.5, currentState);
//                 break;
//             case 2:
//                 selectedTransport = std::make_shared<Train>(100, 5, 20.0, currentState);
//                 break;
//             case 3:
//                 selectedTransport = std::make_shared<Taxi>(4, 0, 2.5, currentState);
//                 break;
//             case 4:
//                 selectedTransport = std::make_shared<Plane>(200, 2, 150.0, currentState);
//                 break;
//             default:
//                 std::cout << "Invalid public transport selection.\n";
//                 return;
//         }
//         std::cout << "Public transport mode selected.\n";
//     }

//     void choosePrivateTransport() {
//         int option;
//         std::cout << "Choose Private Transport:\n1. Car\n2. Bike\n3. Walk\n";
//         std::cin >> option;

//         switch (option) {
//             case 1:
//                 selectedTransport = std::make_shared<Car>(5, 0.7, currentState);
//                 break;
//             case 2:
//                 selectedTransport = std::make_shared<Bike>(1, currentState);
//                 break;
//             case 3:
//                 selectedTransport = std::make_shared<Walk>(currentState);
//                 break;
//             default:
//                 std::cout << "Invalid private transport selection.\n";
//                 return;
//         }
//         std::cout << "Private transport mode selected.\n";
//     }

//     void setState() {
//         int stateOption;
//         std::cout << "Set transport state:\n1. Busy\n2. Quiet\n3. Moderate\n";
//         std::cin >> stateOption;

//         switch (stateOption) {
//             case 1:
//                 currentState = std::make_shared<BusyState>();
//                 std::cout << "State set to Busy.\n";
//                 break;
//             case 2:
//                 currentState = std::make_shared<QuietState>();
//                 std::cout << "State set to Quiet.\n";
//                 break;
//             case 3:
//                 currentState = std::make_shared<ModerateState>();
//                 std::cout << "State set to Moderate.\n";
//                 break;
//             default:
//                 std::cout << "Invalid state selection.\n";
//                 return;
//         }

//         if (selectedTransport) {
//             selectedTransport->setState(currentState);
//         }
//     }

//     void testCommuteTime() {
//         // if (selectedTransport) {
//         //     float time = selectedTransport->calculateCommuteTime();
//         //     std::cout << "Calculated commute time: " << time << " units.\n";
//         // } else {
//         //     std::cout << "No transport selected.\n";
//         // }
//         if (selectedTransport) {
//             float distance;
//             std::cout << "Enter commute distance: ";
//             std::cin >> distance;

//             // Use the calculateCommuteTime method of the selected transport
//             float time = selectedTransport->calculateCommuteTime(distance);
//             // std::cout << "Estimated commute time: " << time << " minutes\n";
//         } else {
//             std::cout << "No transport selected.\n";
//         }
//     }

//     void checkAvailability() {
//         if (selectedTransport && selectedTransport->isAvailable()) {
//             std::cout << "The selected transport mode is available.\n";
//         } else {
//             std::cout << "The selected transport mode is not available.\n";
//         } 
//     }

//     void travelCitizen() {
//         if (citizen.canTravel()) {
//             citizen.travel();
//         } else {
//             std::cout << "No available preferred transport mode for citizen.\n";
//         }
//     }

//     void updateSatisfaction() {
//         float updateValue;
//         std::cout << "Enter satisfaction change (e.g., -5 for decrease, 5 for increase): ";
//         std::cin >> updateValue;
//         citizen.updateSatisfaction(updateValue);
//     }






    
// };

// #endif
#ifndef TRANSPORTSELECTOR_H
#define TRANSPORTSELECTOR_H

#include <iostream>
#include <memory>
#include <string>
#include "Bus.h"
#include "Train.h"
#include "Taxi.h"
#include "Plane.h"
#include "Car.h"
#include "Bike.h"
#include "Walk.h"
#include "BusyState.h"
#include "QuietState.h"
#include "ModerateState.h"
#include "Citizen.h"

class TransportSelector {
private:
    std::shared_ptr<TransportStrategy> selectedTransport;
    std::shared_ptr<TransportationState> currentState;
    Citizen citizen{"John Doe"};  // Test Citizen

public:

    void runTests() {
        int action;
        do {
            std::cout << "\nSelect an action:\n"
                      << "1. Choose Transport Mode\n"
                      << "2. Set Transport State\n"
                      << "3. Test Commute Time\n"
                      << "4. Check Availability\n"
                      << "5. Citizen Travel\n"
                      << "6. Display Citizen Info\n"
                      << "7. Update Satisfaction\n"
                      << "0. Exit\n";
            std::cin >> action;

            switch (action) {
                case 1: chooseTransportMode(); break;
                case 2: setState(); break;
                case 3: testCommuteTime(); break;
                case 4: checkAvailability(); break;
                case 5: travelCitizen(); break;
                case 6: citizen.displayInfo(); break;
                case 7: updateSatisfaction(); break;
                case 0: std::cout << "Exiting tests.\n"; break;
                default: std::cout << "Invalid action.\n"; break;
            }
        } while (action != 0);
    }

    void chooseTransportMode() {
        int type, index;
        std::cout << "Choose mode type:\n1. Public Transport\n2. Private Transport\n";
        std::cin >> type;

        if (type == 1) {
            choosePublicTransport();
        } else if (type == 2) {
            choosePrivateTransport();
        } else {
            std::cout << "Invalid type.\n";
            return;
        }

        std::cout << "Assign transport to which slot (0-2) in citizen’s preferred modes? ";
        std::cin >> index;
        if (index >= 0 && index < 3) {
            citizen.setTransportStrategy(selectedTransport, index);
        } else {
            std::cout << "Invalid slot.\n";
        }
    }

    void choosePublicTransport() {
        int option;
        std::cout << "Choose Public Transport:\n1. Bus\n2. Train\n3. Taxi\n4. Plane\n";
        std::cin >> option;

        switch (option) {
            case 1:
                selectedTransport = std::make_shared<Bus>(50, 10, 1.5, currentState);
                break;
            case 2:
                selectedTransport = std::make_shared<Train>(100, 5, 20.0, currentState);
                break;
            case 3:
                selectedTransport = std::make_shared<Taxi>(4, 0, 2.5, currentState);
                break;
            case 4:
                selectedTransport = std::make_shared<Plane>(200, 2, 150.0, currentState);
                break;
            default:
                std::cout << "Invalid public transport selection.\n";
                return;
        }
        std::cout << "Public transport mode selected.\n";
    }

    void choosePrivateTransport() {
        int option;
        std::cout << "Choose Private Transport:\n1. Car\n2. Bike\n3. Walk\n";
        std::cin >> option;

        switch (option) {
            case 1:
                selectedTransport = std::make_shared<Car>(5, 0.7, currentState);
                break;
            case 2:
                selectedTransport = std::make_shared<Bike>(1, currentState);
                break;
            case 3:
                selectedTransport = std::make_shared<Walk>(currentState);
                break;
            default:
                std::cout << "Invalid private transport selection.\n";
                return;
        }
        std::cout << "Private transport mode selected.\n";
    }

    void setState() {
        int stateOption;
        std::cout << "Set transport state:\n1. Busy\n2. Quiet\n3. Moderate\n";
        std::cin >> stateOption;

        switch (stateOption) {
            case 1:
                currentState = std::make_shared<BusyState>();
                std::cout << "State set to Busy.\n";
                break;
            case 2:
                currentState = std::make_shared<QuietState>();
                std::cout << "State set to Quiet.\n";
                break;
            case 3:
                currentState = std::make_shared<ModerateState>();
                std::cout << "State set to Moderate.\n";
                break;
            default:
                std::cout << "Invalid state selection.\n";
                return;
        }

        if (selectedTransport) {
            selectedTransport->setState(currentState);
        }
    }

    void testCommuteTime() {
        if (selectedTransport) {
            float distance;
            std::cout << "Enter travel distance in km: ";
            std::cin >> distance;

            // Determine mode type to pass to calculateCommuteTime
            std::string mode;
            if (std::dynamic_pointer_cast<Walk>(selectedTransport)) mode = "walk";
            else if (std::dynamic_pointer_cast<Bike>(selectedTransport)) mode = "bike";
            else if (std::dynamic_pointer_cast<Car>(selectedTransport)) mode = "car";
            else if (std::dynamic_pointer_cast<Bus>(selectedTransport)) mode = "bus";
            else if (std::dynamic_pointer_cast<Train>(selectedTransport)) mode = "train";
            else if (std::dynamic_pointer_cast<Taxi>(selectedTransport)) mode = "taxi";
            else if (std::dynamic_pointer_cast<Plane>(selectedTransport)) mode = "plane";
            else mode = "default";

            // Calculate and print commute time
            float time = selectedTransport->calculateCommuteTime(distance, -1, mode);
            std::cout << "Calculated commute time: " << time << " hours.\n";
        } else {
            std::cout << "No transport selected.\n";
        }
    }

    void checkAvailability() {
        if (selectedTransport && selectedTransport->isAvailable()) {
            std::cout << "The selected transport mode is available.\n";
        } else {
            std::cout << "The selected transport mode is not available.\n";
        } 
    }

    void travelCitizen() {
        if (citizen.canTravel()) {
            citizen.travel();
        } else {
            std::cout << "No available preferred transport mode for citizen.\n";
        }
    }

    void updateSatisfaction() {
        float updateValue;
        std::cout << "Enter satisfaction change (e.g., -5 for decrease, 5 for increase): ";
        std::cin >> updateValue;
        citizen.updateSatisfaction(updateValue);
    }
};

#endif
