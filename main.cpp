#include "Player.h"
#include <iostream>

int main() {
    Player player;
    int choice = 0;

    while (choice != 7) {
        std::cout << "\nCity Simulation:\n";
        std::cout << "1. Create City\n";
        std::cout<< "2. Use Transport\n";
        std::cout << "2. Remove a Building\n";
        std::cout << "3. Increase Population\n";
        std::cout << "4. Increase Jobs\n";
        std::cout << "5. Expand Utilities\n";
        std::cout << "6. Show City State\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                player.addResidentialBuilding();
                break;
            case 2:
                player.removeBuilding();
                break;
            case 3: {
                int amount;
                std::cout << "Enter amount to increase population: ";
                std::cin >> amount;
                player.increasePopulation(amount);
                break;
            }
            case 4: {
                int amount;
                std::cout << "Enter amount to increase jobs: ";
                std::cin >> amount;
                player.increaseJobs(amount);
                break;
            }
            case 5:
                player.expandUtilities();
                break;
            case 6:
                player.showCityState();
                break;
            case 7:
                std::cout << "Exiting City Simulation.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
