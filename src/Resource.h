#ifndef RESOURCE_H
#define RESOURCE_H

class Resource {
protected:
    float baseCost;

public:
    Resource(float cost);
    virtual ~Resource() = default;

    virtual int getCapacity() const = 0;
    virtual void consume(int amount) = 0;
    virtual void replenish(int amount) = 0;
    float getBaseCost() const;
};

#endif
