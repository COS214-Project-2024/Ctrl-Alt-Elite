// #include <iostream>
// #include <memory>
// #include "Citizen.h"
// #include "TransportSelector.h"
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
// #include "PrivateBusyState.h"
// #include "PrivateQuietState.h"
// #include "PrivateModerateState.h"

// void testTransportModes() {
//     // Test each transport mode with its travel method
//     std::cout << "=== Testing Transport Modes ===\n";

//     Bus bus(50, 10, 1.5, new QuietState());
//     std::cout << "Bus: ";
//     bus.travel();

//     Train train(100, 5, 20.0, new ModerateState());
//     std::cout << "Train: ";
//     train.travel();

//     Taxi taxi(4, 0, 2.5, new BusyState());
//     std::cout << "Taxi: ";
//     taxi.travel();

//     Plane plane(200, 2, 150.0, new QuietState());
//     std::cout << "Plane: ";
//     plane.travel();

//     Car car(5, 0.7, new PrivateQuietState());
//     std::cout << "Car: ";
//     car.travel();

//     Bike bike(1, new PrivateModerateState());
//     std::cout << "Bike: ";
//     bike.travel();

//     Walk walk(new PrivateQuietState());
//     std::cout << "Walk: ";
//     walk.travel();
// }

// void testStates() {
//     // Test each state with its handle and changeState methods
//     std::cout << "\n=== Testing States ===\n";

//     ModeOfTransport* transport = new Bus(50, 10, 1.5, new QuietState());

//     BusyState busyState;
//     std::cout << "Busy State - Handle and Change:\n";
//     busyState.handle(*transport);
//     busyState.changeState(*transport);

//     QuietState quietState;
//     std::cout << "Quiet State - Handle and Change:\n";
//     quietState.handle(*transport);
//     quietState.changeState(*transport);

//     ModerateState moderateState;
//     std::cout << "Moderate State - Handle and Change:\n";
//     moderateState.handle(*transport);
//     moderateState.changeState(*transport);

//     PrivateBusyState privateBusyState;
//     std::cout << "Private Busy State - Handle and Change:\n";
//     privateBusyState.handle(*transport);
//     privateBusyState.changeState(*transport);

//     PrivateQuietState privateQuietState;
//     std::cout << "Private Quiet State - Handle and Change:\n";
//     privateQuietState.handle(*transport);
//     privateQuietState.changeState(*transport);

//     PrivateModerateState privateModerateState;
//     std::cout << "Private Moderate State - Handle and Change:\n";
//     privateModerateState.handle(*transport);
//     privateModerateState.changeState(*transport);

//     delete transport;
// }

// void testCitizen() {
//     // Test the Citizen class and transport strategy setting
//     std::cout << "\n=== Testing Citizen ===\n";

//     Citizen citizen("John Doe");

//     // Set different modes of transport for Citizen
//     std::cout << "Setting preferred transport modes for Citizen:\n";
//     citizen.setTransportStrategy(new Bus(50, 10, 1.5, new QuietState()), 0);
//     citizen.setTransportStrategy(new Car(5, 0.7, new PrivateQuietState()), 1);
//     citizen.setTransportStrategy(new Walk(new PrivateModerateState()), 2);

//     // Test availability and travel
//     std::cout << "\nChecking if Citizen can travel with current modes:\n";
//     if (citizen.canTravel()) {
//         std::cout << "Citizen can travel. Initiating travel.\n";
//         citizen.travel();
//     } else {
//         std::cout << "No available transport mode for Citizen.\n";
//     }

//     // Display Citizen info
//     citizen.displayInfo();

//     // Update satisfaction
//     std::cout << "\nUpdating satisfaction:\n";
//     citizen.updateSatisfaction(-10);
//     citizen.displayInfo();
// }

// void testTransportSelector() {
//     // Test TransportSelector functionality
//     std::cout << "\n=== Testing Transport Selector ===\n";

//     TransportSelector selector;

//     selector.chooseTransportMode();
//     selector.setState();
//     selector.testCommuteTime();
//     selector.checkAvailability();
// }

// // int main() {
// //     testTransportModes();     // Test individual transport modes and their travel() methods
// //     testStates();             // Test individual states and their handle() / changeState() methods
// //     testCitizen();            // Test the Citizen class functionality with different transport modes
// //     testTransportSelector();  // Test the TransportSelector workflow

// //     return 0;
// // }

#include <iostream>
#include <memory>
#include "Citizen.h"
#include "TransportSelector.h"
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
#include "PrivateBusyState.h"
#include "PrivateQuietState.h"
#include "PrivateModerateState.h"

void testTransportModes() {
    std::cout << "=== Testing Transport Modes ===\n";

    auto bus = std::make_shared<Bus>(50, 10, 1.5, std::make_shared<QuietState>());
    std::cout << "Bus: ";
    bus->travel();

    auto train = std::make_shared<Train>(100, 5, 20.0, std::make_shared<ModerateState>());
    std::cout << "Train: ";
    train->travel();

    auto taxi = std::make_shared<Taxi>(4, 0, 2.5, std::make_shared<BusyState>());
    std::cout << "Taxi: ";
    taxi->travel();

    auto plane = std::make_shared<Plane>(200, 2, 150.0, std::make_shared<QuietState>());
    std::cout << "Plane: ";
    plane->travel();

    auto car = std::make_shared<Car>(5, 0.7, std::make_shared<PrivateQuietState>());
    std::cout << "Car: ";
    car->travel();

    auto bike = std::make_shared<Bike>(1, std::make_shared<PrivateModerateState>());
    std::cout << "Bike: ";
    bike->travel();

    auto walk = std::make_shared<Walk>(std::make_shared<PrivateQuietState>());
    std::cout << "Walk: ";
    walk->travel();
}

void testStates() {
    std::cout << "\n=== Testing States ===\n";

    auto transport = std::make_shared<Bus>(50, 10, 1.5, std::make_shared<QuietState>());

    BusyState busyState;
    std::cout << "Busy State - Handle and Change:\n";
    busyState.handle(transport);
    busyState.changeState(transport);

    QuietState quietState;
    std::cout << "Quiet State - Handle and Change:\n";
    quietState.handle(transport);
    quietState.changeState(transport);

    ModerateState moderateState;
    std::cout << "Moderate State - Handle and Change:\n";
    moderateState.handle(transport);
    moderateState.changeState(transport);

    PrivateBusyState privateBusyState;
    std::cout << "Private Busy State - Handle and Change:\n";
    privateBusyState.handle(transport);
    privateBusyState.changeState(transport);

    PrivateQuietState privateQuietState;
    std::cout << "Private Quiet State - Handle and Change:\n";
    privateQuietState.handle(transport);
    privateQuietState.changeState(transport);

    PrivateModerateState privateModerateState;
    std::cout << "Private Moderate State - Handle and Change:\n";
    privateModerateState.handle(transport);
    privateModerateState.changeState(transport);
}

void testCitizen() {
    std::cout << "\n=== Testing Citizen ===\n";

    Citizen citizen("John Doe");

    std::cout << "Setting preferred transport modes for Citizen:\n";
    citizen.setTransportStrategy(std::make_shared<Bus>(50, 10, 1.5, std::make_shared<QuietState>()), 0);
    citizen.setTransportStrategy(std::make_shared<Car>(5, 0.7, std::make_shared<PrivateQuietState>()), 1);
    citizen.setTransportStrategy(std::make_shared<Walk>(std::make_shared<PrivateModerateState>()), 2);

    std::cout << "\nChecking if Citizen can travel with current modes:\n";
    if (citizen.canTravel()) {
        std::cout << "Citizen can travel. Initiating travel.\n";
        citizen.travel();
    } else {
        std::cout << "No available transport mode for Citizen.\n";
    }

    citizen.displayInfo();

    std::cout << "\nUpdating satisfaction:\n";
    citizen.updateSatisfaction(-10);
    citizen.displayInfo();
}

void testTransportSelector() {
    std::cout << "\n=== Testing Transport Selector ===\n";

    TransportSelector selector;

    selector.chooseTransportMode();
    selector.setState();
    selector.testCommuteTime();
    selector.checkAvailability();
}

// int main() {
//     testTransportModes();     // Test individual transport modes and their travel() methods
//     testStates();             // Test individual states and their handle() / changeState() methods
//     testCitizen();            // Test the Citizen class functionality with different transport modes
//     testTransportSelector();  // Test the TransportSelector workflow

//     return 0;
// }
