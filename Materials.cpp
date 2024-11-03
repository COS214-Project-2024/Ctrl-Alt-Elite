#include "Materials.h"

Materials::Materials(int cap, float cost) : Resource(cost), capacity(cap) {}

int Materials::getCapacity() const {
    return capacity;
}

void Materials::consume(int amount) {
    if (amount <= capacity) capacity -= amount;
}

void Materials::replenish(int amount) {
    capacity += amount;
}
