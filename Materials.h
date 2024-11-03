#ifndef MATERIALS_H
#define MATERIALS_H

#include "Resource.h"

class Materials : public Resource {
private:
    int capacity;

public:
    Materials(int cap, float cost);
    int getCapacity() const override;
    void consume(int amount) override;
    void replenish(int amount) override;
};

#endif
