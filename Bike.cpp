#include "Bike.h"
#include <memory>
#include <iostream>

/**
 * @brief Simulates a travel action for the bike, displaying an ASCII graphic.
 * 
 * If the bike is available, it displays an ASCII representation and
 * confirms usage. Otherwise, it informs the user that the bike is unavailable.
 */
void Bike::travel() {
    if (isAvailable()) {
        std::cout << "Bike is being used for travel.\n";
        std::cout << "             __o\n";
        std::cout << "           _ \\<_\n";
        std::cout << "          (_)/(_)\n";
    } else {
        std::cout << "Bike is currently unavailable.\n";
    }
}

/**
 * @brief Constructs a Bike with a given capacity and optional state.
 * @param cap Capacity or load limit of the bike.
 * @param state Optional initial state, representing availability.
 */
Bike::Bike(int cap, std::shared_ptr<TransportationState> state) 
    : PrivateTransport(cap, state) {}
