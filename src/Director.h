#ifndef DIRECTOR_H
#define DIRECTOR_H

class Director {

private:
	Builder* builder;

public:
	Director(Builder* newBuilder);

	void setBuilder(Builder* newBuilder);

	void constructCityGrowth();
};

#endif
