#ifndef CITIZEN_H
#define CITIZEN_H

#include <iostream>
#include <string>
#include <memory>
#include "TransportStrategy.h"
#include "PublicServicesDepartment.h"
#include "TransportationState.h"

class PublicServicesDepartment;

/**
 * @class Citizen
 * @brief Represents a citizen with preferences, satisfaction level, and interactions with public services.
 * 
 * The Citizen class includes attributes related to transportation preferences, state, and personal details,
 * and provides functionality for managing transport, satisfaction, and service interactions.
 */
class Citizen {
private:
    std::shared_ptr<TransportStrategy> preferredModes[3]; /**< Array of preferred transport strategies */
    std::shared_ptr<TransportationState> currentState;    /**< Current transportation state */
    std::shared_ptr<PublicServicesDepartment> services;   /**< Associated public services department */
    std::string name;                                     /**< Name of the citizen */
    float satisfaction;                                   /**< Citizen's satisfaction level */
    float commuteTime;                                    /**< Last recorded commute time */

    std::string employmentStatus;                         /**< Citizen's employment status */
    std::string currentEducation;                         /**< Current education status */
    std::string healthcareAccess;                         /**< Healthcare access level */
    float taxRate;                                        /**< Tax rate for income tax */
    std::string currentPolicy;                            /**< Current government policy affecting the citizen */
    std::string issueType;                                /**< Type of issue citizen may raise */
    int requestType;                                      /**< Type of request made to government */

public:
    /**
     * @brief Default constructor for a Citizen.
     */
    Citizen();

    /**
     * @brief Constructs a Citizen with a name, initial transportation state, and associated public services.
     * @param citizenName Name of the citizen.
     * @param state Initial transportation state (optional).
     * @param services Associated public services department (optional).
     */
    Citizen(const std::string& citizenName, std::shared_ptr<TransportationState> state = nullptr, std::shared_ptr<PublicServicesDepartment> services = nullptr);

    /**
     * @brief Sets a preferred transport strategy at a given index.
     * @param strategy The transport strategy to set.
     * @param index The index to set the strategy in (0, 1, or 2).
     */
    void setTransportStrategy(std::shared_ptr<TransportStrategy> strategy, int index);

    /**
     * @brief Checks if the citizen can travel using any preferred transport mode.
     * @return True if at least one preferred mode is available; otherwise, false.
     */
    bool canTravel();

    /**
     * @brief Initiates travel using the first available transport mode in preferred modes.
     */
    void travel();

    /**
     * @brief Displays information about the citizen, including name and satisfaction level.
     */
    void displayInfo();

    /**
     * @brief Updates the satisfaction level of the citizen.
     * @param value Amount to adjust satisfaction by.
     */
    void updateSatisfaction(float value);

    /**
     * @brief Sets the current transportation state of the citizen.
     * @param state The new transportation state.
     */
    void setState(std::shared_ptr<TransportationState> state);

    /**
     * @brief Gets the current transportation state.
     * @return Current transportation state.
     */
    std::shared_ptr<TransportationState> getState();

    /**
     * @brief Updates the citizen's satisfaction based on available public services and policies.
     */
    void update();

    /**
     * @brief Responds to government changes affecting the citizen (unimplemented).
     */
    void respondToGovernmentChanges();

    /**
     * @brief Raises an issue or concern to the government (unimplemented).
     */
    void raiseIssue();

    /**
     * @brief Pays income tax based on specified amount (unimplemented).
     * @param amount The amount of income tax to pay.
     */
    void payIncomeTax(float amount);

    /**
     * @brief Adjusts satisfaction based on tax impact (unimplemented).
     * @param taxImpact Amount to adjust satisfaction by.
     */
    void adjustSatisfaction(float taxImpact);

    /**
     * @brief Makes a formal request to the government (unimplemented).
     */
    void makeRequest();

    /**
     * @brief Gets the current request type.
     * @return Request type as an integer.
     */
    int getRequestType();
};

#endif // CITIZEN_H
