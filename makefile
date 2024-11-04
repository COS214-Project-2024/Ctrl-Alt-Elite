OBJS = allocate_budget_command.o Apartment.o Bike.o BudgetDepartment.o Building.o BuildingTarget.o Bus.o BusyState.o Car.o Citizen.o City.o Commercial.o CompositeBuilding.o CulturalCenter.o Education.o Estate.o Factories.o Government.o HealthCare.o House.o Industrial.o Landmarks.o LawEnforcment.o Mall.o ModeOfTransport.o ModerateState.o Monument.o Office.o Park.o Plane.o Plants.o PoliciesDepartment.o policy_command.o PrivateBusyState.o PrivateModerateState.o PrivateQuietState.o PrivateTransport.o public_services_command.o PublicServicesDepartment.o PublicTransport.o PublicTransportState.o PrivateTransportState.o QuietState.o Residential.o Resource.o Shop.o tax_command.o TaxationDepartment.o Taxi.o main.o Townhouse.o Train.o TransportationState.o Walk.o Warehouses.o CityBuilder.o Director.o ResourceFactory.o Energy.o Water.o Materials.o Budget.o WasteManagement.o WaterSupply.o SewageSystems.o PowerPlants.o Adapter.o Utilities.o BuildingIterator.o Player.o

SOURCE = allocate_budget_command.cpp Apartment.cpp Bike.cpp BudgetDepartment.cpp Building.cpp BuildingTarget.cpp Bus.cpp BusyState.cpp Car.cpp Citizen.cpp City.cpp Commercial.cpp CompositeBuilding.cpp CulturalCenter.cpp Education.cpp Estate.cpp Factories.cpp Government.cpp HealthCare.cpp House.cpp Industrial.cpp Landmarks.cpp LawEnforcment.cpp Mall.cpp ModeOfTransport.cpp ModerateState.cpp Monument.cpp Office.cpp Park.cpp Plane.cpp Plants.cpp PoliciesDepartment.cpp policy_command.cpp PrivateBusyState.cpp PrivateModerateState.cpp PrivateQuietState.cpp PrivateTransport.cpp public_services_command.cpp PublicServicesDepartment.cpp PublicTransport.cpp PublicTransportState.cpp PrivateTransportState.cpp QuietState.cpp Residential.cpp Resource.cpp Shop.cpp tax_command.cpp TaxationDepartment.cpp Taxi.cpp main.cpp Townhouse.cpp Train.cpp TransportationState.cpp Walk.cpp Warehouses.cpp CityBuilder.cpp Director.cpp ResourceFactory.cpp Energy.cpp Water.cpp Materials.cpp Budget.cpp WasteManagement.cpp WaterSupply.cpp SewageSystems.cpp PowerPlants.cpp Adapter.cpp Utilities.cpp BuildingIterator.cpp Player.cpp

HEADER = Adapter.h allocate_budget_command.h Apartment.h Bike.h BudgetDepartment.h Building.h BuildingTarget.h Bus.h BusyState.h Car.h Citizen.h City.h command.h Commercial.h CompositeBuilding.h CulturalCenter.h departments.h Education.h Estate.h Factories.h Government.h HealthCare.h House.h Industrial.h Iterator.h Landmarks.h LawEnforcment.h Mall.h ModeOfTransport.h ModerateState.h Monument.h Office.h Park.h Plane.h Plants.h PoliciesDepartment.h policy_command.h PrivateBusyState.h PrivateModerateState.h PrivateQuietState.h PrivateTransport.h public_services_command.h PublicServicesDepartment.h PublicTransport.h PublicTransportState.h PrivateTransportState.h QuietState.h Residential.h Resource.h ResourceFactory.h Shop.h tax_command.h TaxationDepartment.h Taxi.h Townhouse.h Train.h TransportationState.h TransportStrategy.h Utilities.h Walk.h Warehouses.h Builder.h CityBuilder.h Energy.h Water.h Materials.h Budget.h Player.h

OUT = a.out
FLAGS = -g3 -c -Wall
LFLAGS = 
CC = g++

all: $(OUT)

$(OUT): $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

# Compilation rules for each source file
%.o: %.cpp
	$(CC) $(FLAGS) $< -lcppunit

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)

valgrind: $(OUT)
	valgrind ./$(OUT)

valgrind_leakcheck: $(OUT)
	valgrind --leak-check=full ./$(OUT)

valgrind_extreme: $(OUT)
	valgrind --leak-check=full --show-leak-kinds=all --leak-resolution=high --track-origins=yes --vgdb=yes ./$(OUT)
