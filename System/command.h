#ifndef COMMAND_H
#define COMMAND_H

/**
 * @class Command
 * @brief Interface for command pattern, representing an executable action.
 * 
 * The Command interface defines a standard structure for encapsulating actions
 * as objects, enabling parameterization of clients with queues, requests, and
 * operations.
 */
class Command {
public:
    /**
     * @brief Executes the command action.
     * 
     * This is a pure virtual function, intended to be implemented by concrete
     * command classes to perform specific actions.
     */
    virtual void execute() = 0;

    /**
     * @brief Virtual destructor for the Command interface.
     * 
     * Ensures derived classes can clean up resources appropriately when deleted
     * through a base class pointer.
     */
    virtual ~Command() = default;
};

#endif // COMMAND_H
