#include "Energy.h"

Energy::Energy(int cap, float cost) : Resource(cost), capacity(cap) {}

int Energy::getCapacity() const {
    return capacity;
}

void Energy::consume(int amount) {
    if (amount <= capacity) capacity -= amount;
}

void Energy::replenish(int amount) {
    capacity += amount;
}
