// government.cpp
#include "government.h"

void Government::setCommand(std::unique_ptr<Command> command) {
    commands.push_back(std::move(command));
}

void Government::executeCommands() {
    for (const auto& command : commands) {
        command->execute();
    }
    commands.clear();
}
