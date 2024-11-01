# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g -fprofile-arcs -ftest-coverage

# Executable names
TEST_TARGET = TestMain

# Source files for the test target
TEST_SRCS = TestMain.cpp Government.cpp City.cpp Citizen.cpp Education.cpp LawEnforcment.cpp HealthCare.cpp PoliciesDepartment.cpp PublicServicesDepartment.cpp BudgetDepartment.cpp TaxationDepartment.cpp
# Object files for the test target
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

# Default target - runs the test program (this will be used for "make run")
all: run

# Link object files to create the test executable
$(TEST_TARGET): $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run the test program
run: $(TEST_TARGET)
	./$(TEST_TARGET)

# Clean object files, executables, and coverage files
clean:
	rm -f $(TEST_OBJS) $(TEST_TARGET) *.gcda *.gcno *.gcov

# Valgrind memory check on test main
valgrind: $(TEST_TARGET)
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(TEST_TARGET)

# Code coverage analysis for test main
coverage: $(TEST_TARGET)
	./$(TEST_TARGET)
	gcov $(TEST_SRCS)

# Phony targets
.PHONY: all run demo_build demo clean valgrind coverage
