cmake_minimum_required(VERSION 3.26)
project(COS214_Project)

set(CMAKE_CXX_STANDARD 17)

add_executable(COS214_Project main.cpp
        command.h
        City.h
        City.cpp
        tax_command.h
        tax_command.cpp
        allocate_budget_command.h
        allocate_budget_command.cpp
        policy_command.h
        policy_command.cpp
        public_services_command.h
        public_services_command.cpp
        Government.h
        Government.cpp
        departments.h
        TaxationDepartment.cpp
        TaxationDepartment.h
        PublicServicesDepartment.cpp
        PublicServicesDepartment.h
        PoliciesDepartment.cpp
        PoliciesDepartment.h
        BudgetDepartment.cpp
        BudgetDepartment.h
)
