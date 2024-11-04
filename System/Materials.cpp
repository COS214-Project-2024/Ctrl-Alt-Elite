#include "Materials.h"

Materials::Materials(int cap) : Resource(cap * 5.0f), capacity(cap) {}

int Materials::getCapacity() const {
    return capacity;
}

void Materials::consume(int amount) {
    if (amount <= capacity) {
        capacity -= amount;
    }
    else std::cout << "Not enough materials" << std::endl;
}

void Materials::replenish(int amount) {
    capacity += amount;
}
