// city.h
#ifndef CITY_H
#define CITY_H

#include <string>
#include <iostream>

class City {
public:
    void collectTaxes();
    void allocateBudget(const std::string& department, double amount);
    void enforcePolicy(const std::string& policy);
    void providePublicService(const std::string& service);
};

#endif // CITY_H
