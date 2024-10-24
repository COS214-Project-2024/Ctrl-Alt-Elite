#ifndef BUILDINGITERATOR_H
#define BUILDINGITERATOR_H

class BuildingIterator : Iterator {

private:
	unordered_map<string, int> current;
	unordered_map<string, int> end;

public:
	bool hasNext();

	pair<string, int> next();
};

#endif
