#ifndef GOVERNMENT_H
#define GOVERNMENT_H

#include <vector>
#include <string>
#include <algorithm> 
#include <iostream>

class Citizen;
class City;

/**
 * @class Government
 * @brief The Government class manages the city's administration, including policies, tax rates, and public services.
 */
class Government {
private:
    std::vector<Citizen*> citizen; ///< List of citizens observing the government.
    City* city; ///< Pointer to the city managed by the government.

protected:
    std::string currentPolicy; ///< The current policy being implemented by the government.
    float taxRate; ///< The current tax rate applied in the city.
    float allocatedBudget; ///< The budget allocated for public services.
    std::vector<std::string> availableServices; ///< List of available public services.

public:
    /**
     * @brief Default constructor for the Government class.
     */
    Government();

    /**
     * @brief Parameterized constructor for the Government class.
     * @param city Pointer to the city managed by the government.
     */
    Government(City* city);

    /**
     * @brief Generates a report of the government's status, including tax rate, budget, services, and policy.
     */
    void Report();

    /**
     * @brief Adds a citizen as an observer to the government.
     * @param observer Pointer to the citizen to be added.
     */
    void addObserver(Citizen* observer);

    /**
     * @brief Removes a citizen from the list of observers.
     * @param observer Pointer to the citizen to be removed.
     */
    void removeObserver(Citizen* observer);

    /**
     * @brief Notifies all registered observers (citizens) of updates.
     */
    void notifyObservers();

    /**
     * @brief Manages city operations. Can be overridden by derived classes.
     */
    virtual void manageCity() { return; }

    /**
     * @brief Gets the current tax rate.
     * @return The current tax rate.
     */
    virtual float getTaxrate() { return 0; }

    /**
     * @brief Gets the current policy of the government.
     * @return The current policy as a string.
     */
    std::string getCurrentPolicy();

    /**
     * @brief Gets the available public services.
     * @return A vector of available services.
     */
    std::vector<std::string> getAvailableServices();
};

#endif // GOVERNMENT_H
