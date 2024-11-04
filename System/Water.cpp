#include "Water.h"

Water::Water(int cap) : Resource(cap * 15.5f), capacity(cap)  {}

int Water::getCapacity() const {
    return capacity;
}

void Water::consume(int amount) {
    if (amount <= capacity) {
        capacity -= amount;
    }
    else std::cout << "Not enough water available" << std::endl;
}

void Water::replenish(int amount) {
    capacity += amount;

}
