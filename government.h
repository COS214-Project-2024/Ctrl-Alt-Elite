// government.h
#ifndef GOVERNMENT_H
#define GOVERNMENT_H

#include "command.h"
#include <vector>
#include <memory>

class Government {
private:
    std::vector<std::unique_ptr<Command>> commands;

public:
    void setCommand(std::unique_ptr<Command> command);
    void executeCommands();
};

#endif // GOVERNMENT_H
