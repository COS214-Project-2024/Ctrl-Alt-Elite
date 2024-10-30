OBJS = allocate_budget_command.o Apartment.o Bike.o BudgetDepartment.o Building.o BuildingTarget.o Bus.o BusyState.o Car.o Citizen.o City.o Commercial.o CompositeBuilding.o CulturalCenter.o Education.o Estate.o Factories.o Government.o HealthCare.o House.o Industrial.o Landmarks.o LawEnforcment.o Mall.o ModeOfTransport.o ModerateState.o Monument.o Office.o Park.o Plane.o Plants.o PoliciesDepartment.o policy_command.o PrivateBusyState.o PrivateModerateState.o PrivateQuietState.o PrivateTransport.o public_services_command.o PublicServicesDepartment.o PublicTransport.o PublicTransportState.o PrivateTransportState.o QuietState.o Residential.o Resource.o Shop.o tax_command.o TaxationDepartment.o Taxi.o testing.o Townhouse.o Train.o TransportationState.o Walk.o Warehouses.o
SOURCE = allocate_budget_command.cpp Apartment.cpp Bike.cpp BudgetDepartment.cpp Building.cpp BuildingTarget.cpp Bus.cpp BusyState.cpp Car.cpp Citizen.cpp City.cpp Commercial.cpp CompositeBuilding.cpp CulturalCenter.cpp Education.cpp Estate.cpp Factories.cpp Government.cpp HealthCare.cpp House.cpp Industrial.cpp Landmarks.cpp LawEnforcment.cpp Mall.cpp ModeOfTransport.cpp ModerateState.cpp Monument.cpp Office.cpp Park.cpp Plane.cpp Plants.cpp PoliciesDepartment.cpp policy_command.cpp PrivateBusyState.cpp PrivateModerateState.cpp PrivateQuietState.cpp PrivateTransport.cpp public_services_command.cpp PublicServicesDepartment.cpp PublicTransport.cpp PublicTransportState.cpp PrivateTransportState.cpp QuietState.cpp Residential.cpp Resource.cpp Shop.cpp tax_command.cpp TaxationDepartment.cpp Taxi.cpp testing.cpp Townhouse.cpp Train.cpp TransportationState.cpp Walk.cpp Warehouses.cpp
HEADER = Adapter.h allocate_budget_command.h Apartment.h Bike.h BudgetDepartment.h Building.h BuildingTarget.h Bus.h BusyState.h Car.h Citizen.h City.h command.h Commercial.h CompositeBuilding.h CulturalCenter.h departments.h Education.h Estate.h Factories.h Government.h HealthCare.h House.h Industrial.h Iterator.h Landmarks.h LawEnforcment.h Mall.h ModeOfTransport.h ModerateState.h Monument.h Office.h Park.h Plane.h Plants.h PoliciesDepartment.h policy_command.h PrivateBusyState.h PrivateModerateState.h PrivateQuietState.h PrivateTransport.h public_services_command.h PublicServicesDepartment.h PublicTransport.h PublicTransportState.h PrivateTransportState.h QuietState.h Residential.h Resource.h ResourceFactory.h Shop.h tax_command.h TaxationDeprtment.h Taxi.h Townhouse.h Train.h TransportationState.h TransportStrategy.h Utilities.h Walk.h Warehouses.h
OUT	= a.out
FLAGS	= -g3 -c -Wall
LFLAGS	= 
CC	= g++

all:	a.out

a.out: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

allocate_budget_command.o: allocate_budget_command.cpp
	$(CC) $(FLAGS) allocate_budget_command.cpp -lcppunit

Apartment.o: Apartment.cpp
	$(CC) $(FLAGS) Apartment.cpp -lcppunit

Bike.o: Bike.cpp
	$(CC) $(FLAGS) Bike.cpp -lcppunit

BudgetDepartment.o: BudgetDepartment.cpp
	$(CC) $(FLAGS) BudgetDepartment.cpp -lcppunit

Building.o: Building.cpp
	$(CC) $(FLAGS) Building.cpp -lcppunit

BuildingTarget.o: BuildingTarget.cpp
	$(CC) $(FLAGS) BuildingTarget.cpp -lcppunit

Bus.o: Bus.cpp
	$(CC) $(FLAGS) Bus.cpp -lcppunit

BusyState.o: BusyState.cpp
	$(CC) $(FLAGS) BusyState.cpp -lcppunit

Car.o: Car.cpp
	$(CC) $(FLAGS) Car.cpp -lcppunit

Citizen.o: Citizen.cpp
	$(CC) $(FLAGS) Citizen.cpp -lcppunit

City.o: City.cpp
	$(CC) $(FLAGS) City.cpp -lcppunit

Commercial.o: Commercial.cpp
	$(CC) $(FLAGS) Commercial.cpp -lcppunit

CompositeBuilding.o: CompositeBuilding.cpp
	$(CC) $(FLAGS) CompositeBuilding.cpp -lcppunit

CulturalCenter.o: CulturalCenter.cpp
	$(CC) $(FLAGS) CulturalCenter.cpp -lcppunit

Education.o: Education.cpp
	$(CC) $(FLAGS) Education.cpp -lcppunit

Estate.o: Estate.cpp
	$(CC) $(FLAGS) Estate.cpp -lcppunit

Factories.o: Factories.cpp
	$(CC) $(FLAGS) Factories.cpp -lcppunit

Government.o: Government.cpp
	$(CC) $(FLAGS) Government.cpp -lcppunit

HealthCare.o: HealthCare.cpp
	$(CC) $(FLAGS) HealthCare.cpp -lcppunit

House.o: House.cpp
	$(CC) $(FLAGS) House.cpp -lcppunit

Industrial.o: Industrial.cpp
	$(CC) $(FLAGS) Industrial.cpp -lcppunit

Landmarks.o: Landmarks.cpp
	$(CC) $(FLAGS) Landmarks.cpp -lcppunit

LawEnforcment.o: LawEnforcment.cpp
	$(CC) $(FLAGS) LawEnforcment.cpp -lcppunit

Mall.o: Mall.cpp
	$(CC) $(FLAGS) Mall.cpp -lcppunit

ModeOfTransport.o: ModeOfTransport.cpp
	$(CC) $(FLAGS) ModeOfTransport.cpp -lcppunit

ModerateState.o: ModerateState.cpp
	$(CC) $(FLAGS) ModerateState.cpp -lcppunit

Monument.o: Monument.cpp
	$(CC) $(FLAGS) Monument.cpp -lcppunit

Office.o: Office.cpp
	$(CC) $(FLAGS) Office.cpp -lcppunit

Park.o: Park.cpp
	$(CC) $(FLAGS) Park.cpp -lcppunit

Plane.o: Plane.cpp
	$(CC) $(FLAGS) Plane.cpp -lcppunit

Plants.o: Plants.cpp
	$(CC) $(FLAGS) Plants.cpp -lcppunit

PoliciesDepartment.o: PoliciesDepartment.cpp
	$(CC) $(FLAGS) PoliciesDepartment.cpp -lcppunit

policy_command.o: policy_command.cpp
	$(CC) $(FLAGS) policy_command.cpp -lcppunit

PrivateBusyState.o: PrivateBusyState.cpp
	$(CC) $(FLAGS) PrivateBusyState.cpp -lcppunit

PrivateModerateState.o: PrivateModerateState.cpp
	$(CC) $(FLAGS) PrivateModerateState.cpp -lcppunit

PrivateQuietState.o: PrivateQuietState.cpp
	$(CC) $(FLAGS) PrivateQuietState.cpp -lcppunit

PrivateTransport.o: PrivateTransport.cpp
	$(CC) $(FLAGS) PrivateTransport.cpp -lcppunit

public_services_command.o: public_services_command.cpp
	$(CC) $(FLAGS) public_services_command.cpp -lcppunit

PublicServicesDepartment.o: PublicServicesDepartment.cpp
	$(CC) $(FLAGS) PublicServicesDepartment.cpp -lcppunit

PublicTransport.o: PublicTransport.cpp
	$(CC) $(FLAGS) PublicTransport.cpp -lcppunit

PublicTransportState.o: PublicTransportState.cpp
	$(CC) $(FLAGS) PublicTransportState.cpp -lcppunit

PrivateTransportState.o: PrivateTransportState.cpp
	$(CC) $(FLAGS) PrivateTransportState.cpp -lcppunit

QuietState.o: QuietState.cpp
	$(CC) $(FLAGS) QuietState.cpp -lcppunit

Residential.o: Residential.cpp
	$(CC) $(FLAGS) Residential.cpp -lcppunit

Resource.o: Resource.cpp
	$(CC) $(FLAGS) Resource.cpp -lcppunit

Shop.o: Shop.cpp
	$(CC) $(FLAGS) Shop.cpp -lcppunit

tax_command.o: tax_command.cpp
	$(CC) $(FLAGS) tax_command.cpp -lcppunit

TaxationDepartment.o: TaxationDepartment.cpp
	$(CC) $(FLAGS) TaxationDepartment.cpp -lcppunit

Taxi.o: Taxi.cpp
	$(CC) $(FLAGS) Taxi.cpp -lcppunit

testing.o: testing.cpp
	$(CC) $(FLAGS) testing.cpp -lcppunit

Townhouse.o: Townhouse.cpp
	$(CC) $(FLAGS) Townhouse.cpp -lcppunit

Train.o: Train.cpp
	$(CC) $(FLAGS) Train.cpp -lcppunit

TransportationState.o: TransportationState.cpp
	$(CC) $(FLAGS) TransportationState.cpp -lcppunit

Walk.o: Walk.cpp
	$(CC) $(FLAGS) Walk.cpp -lcppunit

Warehouses.o: Warehouses.cpp
	$(CC) $(FLAGS) Warehouses.cpp -lcppunit

clean:
	rm -f $(OBJS) $(OUT)

run: a.out
	./a.out

valgrind: a.out
	valgrind a.out

valgrind_leakcheck: a.out
	valgrind --leak-check=full a.out

valgrind_extreme: a.out
	valgrind --leak-check=full --show-leak-kinds=all --leak-resolution=high --track-origins=yes --vgdb=yes a.out
