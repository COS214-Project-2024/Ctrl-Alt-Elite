#include "Water.h"

Water::Water(int cap, float cost) : Resource(cost), capacity(cap) {}

int Water::getCapacity() const {
    return capacity;
}

void Water::consume(int amount) {
    if (amount <= capacity) capacity -= amount;
}

void Water::replenish(int amount) {
    capacity += amount;
}
