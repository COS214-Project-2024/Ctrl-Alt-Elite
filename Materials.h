#ifndef MATERIALS_H
#define MATERIALS_H

#include "Resource.h"
#include <iostream>

class Materials : public Resource {
private:
    int capacity; //in metric tons, an average could be 100 000 tons 

public:
    Materials(int cap);
    int getCapacity() const override;
    void consume(int amount) override;
    void replenish(int amount) override;
};

#endif
