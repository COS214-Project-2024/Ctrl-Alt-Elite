cmake_minimum_required(VERSION 3.26)
project(COS214_Project)

set(CMAKE_CXX_STANDARD 17)

add_executable(COS214_Project main.cpp
        command.h
        city.h
        city.cpp
        tax_command.h
        tax_command.cpp
        allocate_budget_command.h
        allocate_budget_command.cpp
        policy_command.h
        policy_command.cpp
        public_services_command.h
        public_services_command.cpp
        government.h
        government.cpp
        departments.h
)
