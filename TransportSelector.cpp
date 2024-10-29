#include "TransportSelector.h"
#include "main.cpp"
#include <iostream>
int main() {
    // TransportSelector selector;
    // selector.runTests(); // Assuming `runTests()` starts the testing or user interface
    testTransportModes();     // Test individual transport modes and their travel() methods
    testStates();             // Test individual states and their handle() / changeState() methods
    testCitizen();            // Test the Citizen class functionality with different transport modes
    testTransportSelector();

    std::cout << "\n------ Testing the entire Selector -------\n";
    TransportSelector selector;
    selector.runTests();
    return 0;
}
