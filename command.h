// command.h
#ifndef COMMAND_H
#define COMMAND_H

// Command Interface
class Command {
public:
    virtual void execute() = 0;
    virtual ~Command() = default;
};

#endif // COMMAND_H
