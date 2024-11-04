#include "Energy.h"

Energy::Energy(int cap) : Resource(cap * 20.0f), capacity(cap) {}

int Energy::getCapacity() const {
    return capacity;
}

void Energy::consume(int amount) {
    if (amount <= capacity) {
        capacity -= amount;
    }
    else std::cout << "Not enough energy available" << std::endl;
}

void Energy::replenish(int amount) {
    capacity += amount;
}
