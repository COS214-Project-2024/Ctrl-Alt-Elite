#ifndef CITY_H
#define CITY_H

class City {

private:
	ResourceFactory* resourceFactory;
	vector<Citizens*> citizens;
	Director director;
	CityBuilder* cityBuilder;
	CompositeBuilding* buildings;
	BuildingTarget* buildingTarget;

public:
	City(ResourceFactory* factory);

	void manageResource(int amount, string resourceType);

	void displayResourceAvailability(string resourceType);

private:
	City();

public:
	void simulateCityGrowth();

	void buildResidentialArea(int units);

	void buildCommercialArea(int units);

	void buildIndustrialArea(int units);

	void howCityStatus();
};

#endif
