#ifndef RESOURCEFACTORY_H
#define RESOURCEFACTORY_H

class ResourceFactory {

private:
	unordered_map<string, Resource*> resources;

	void ResourcesFactory();

public:
	Resources* getResources(string type, int initialAmount);
};

#endif
