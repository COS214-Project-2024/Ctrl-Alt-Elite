#include "Player.h"
#include <iostream>

int main() {
    Player player;
    int choice = 0;

    while (choice != 14) {
        std::cout << "\nCity Simulation:\n";
        std::cout << "1. Create City\n";
        std::cout << "2. Add Building\n";
        std::cout << "3. Add Citizens\n";
        std::cout << "4. Add Government\n";
        std::cout << "5. Add Resources\n";
        std::cout << "6. Add Utilities\n";
        std::cout << "7. Request a public service\n";
        std::cout << "8. Perform Maintenance\n";
        std::cout << "9. Perform Transportation\n";
        std::cout << "10. Display City \n";
        std::cout << "11. Remove a Building\n";
        std::cout << "12. Increase Population\n";
        std::cout << "13. Increase Jobs\n";
        std::cout << "14. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: player.createCity(); break;
            case 2: player.addBuilding(); break;
            case 3: player.addCitizens(); break;
            case 4: player.addGovernment(); break;
            case 5: player.addResources(); break;
            case 6: player.addUtilities(); break;
            case 7: player.performGovernmentPolicies(); break;
            case 8: player.performMaintenance(); break;
            case 9: player.performTransport(); break;
            case 10: player.showCityState(); break;
            case 11: player.removeBuilding(); break;
         
            case 12: {
                int amount;
                std::cout << "Enter amount to increase population: ";
                std::cin >> amount;
                player.increasePopulation(amount);
                break;
            }
            case 13: {
                int amount;
                std::cout << "Enter amount to increase jobs: ";
                std::cin >> amount;
                player.increaseJobs(amount);
                break;
            }
            case 14:
                std::cout << "Exiting City Simulation.\n";
                choice = 14; // Exit the loop
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
