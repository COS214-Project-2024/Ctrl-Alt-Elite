OBJS	= Bike.o Bus.o BusyState.o Car.o Citizen.o ModeOfTransport.o ModerateState.o Plane.o PrivateBusyState.o PrivateModerateState.o PrivateQuietState.o PrivateTransport.o PrivateTransportState.o PublicTransport.o PublicTransportState.o QuietState.o Taxi.o Train.o TransportationState.o TransportSelector.o TransportStrategy.o Walk.o
SOURCE	= main.cpp Bike.cpp Bus.cpp BusyState.cpp Car.cpp Citizen.cpp ModeOfTransport.cpp ModerateState.cpp Plane.cpp PrivateBusyState.cpp PrivateModerateState.cpp PrivateQuietState.cpp PrivateTransport.cpp PrivateTransportState.cpp PublicTransport.cpp PublicTransportState.cpp QuietState.cpp Taxi.cpp Train.cpp TransportationState.cpp TransportSelector.cpp TransportStrategy.cpp Walk.cpp
HEADER	= Bike.h Bus.h BusyState.h Car.h Citizen.h ModeOfTransport.h ModerateState.h Plane.h PrivateBusyState.h PrivateModerateState.h PrivateQuietState.h PrivateTransport.h PrivateTransportState.h PublicTransport.h PublicTransportState.h QuietState.h Taxi.h Train.h TransportationState.h TransportSelector.h TransportStrategy.h Walk.h
OUT	= a.out
FLAGS	= -g3 -c -Wall -std=c++20
LFLAGS	= 
CC	= g++

all:	a.out

a.out: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp -lcppunit
	
Bike.o: Bike.cpp
	$(CC) $(FLAGS) Bike.cpp -lcppunit

Bus.o: Bus.cpp
	$(CC) $(FLAGS) Bus.cpp -lcppunit

BusyState.o: BusyState.cpp
	$(CC) $(FLAGS) BusyState.cpp -lcppunit

Car.o: Car.cpp
	$(CC) $(FLAGS) Car.cpp -lcppunit

Citizen.o: Citizen.cpp
	$(CC) $(FLAGS) Citizen.cpp -lcppunit

ModeOfTransport.o: ModeOfTransport.cpp
	$(CC) $(FLAGS) ModeOfTransport.cpp -lcppunit

ModerateState.o: ModerateState.cpp
	$(CC) $(FLAGS) ModerateState.cpp -lcppunit

Plane.o: Plane.cpp
	$(CC) $(FLAGS) Plane.cpp -lcppunit

PrivateBusyState.o: PrivateBusyState.cpp
	$(CC) $(FLAGS) PrivateBusyState.cpp -lcppunit

PrivateModerateState.o: PrivateModerateState.cpp
	$(CC) $(FLAGS) PrivateModerateState.cpp -lcppunit

PrivateQuietState.o: PrivateQuietState.cpp
	$(CC) $(FLAGS) PrivateQuietState.cpp -lcppunit

PrivateTransport.o: PrivateTransport.cpp
	$(CC) $(FLAGS) PrivateTransport.cpp -lcppunit

PrivateTransportState.o: PrivateTransportState.cpp
	$(CC) $(FLAGS) PrivateTransportState.cpp -lcppunit

PublicTransport.o: PublicTransport.cpp
	$(CC) $(FLAGS) PublicTransport.cpp -lcppunit

PublicTransportState.o: PublicTransportState.cpp
	$(CC) $(FLAGS) PublicTransportState.cpp -lcppunit

QuietState.o: QuietState.cpp
	$(CC) $(FLAGS) QuietState.cpp -lcppunit

Taxi.o: Taxi.cpp
	$(CC) $(FLAGS) Taxi.cpp -lcppunit

Train.o: Train.cpp
	$(CC) $(FLAGS) Train.cpp -lcppunit

TransportationState.o: TransportationState.cpp
	$(CC) $(FLAGS) TransportationState.cpp -lcppunit

TransportSelector.o: TransportSelector.cpp
	$(CC) $(FLAGS) TransportSelector.cpp -lcppunit

TransportStrategy.o: TransportStrategy.cpp
	$(CC) $(FLAGS) TransportStrategy.cpp -lcppunit

Walk.o: Walk.cpp
	$(CC) $(FLAGS) Walk.cpp -lcppunit

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