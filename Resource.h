#ifndef RESOURCE_H
#define RESOURCE_H

class Resource {
protected:
    float baseCost;

    //cost factors
    //Water = 15.5
    //Energy = 20.0
    //Materials = 5.0
    //Budget resource has no cost
public:
    Resource(float cost);
    virtual ~Resource() = default;

    virtual int getCapacity() const = 0;
    virtual void consume(int amount) = 0;
    virtual void replenish(int amount) = 0;
    float getCost() const;
};

#endif
