#include "car.h"
#include <string.h>
#include <iostream>
using namespace std;

char* car::getMake()
{
	return make;
}

char* car::getModel()
{
	return model;
}

char* car::getEngineVolume()
{
	return engineVolume;
}

char* car::getColor()
{
	return color;
}

void car::setMake(char* myMake)
{
	strcpy(make, myMake);
}

void car::setModel(char* myModel)
{
	strcpy(model, myModel);
}
void car::setEngineVolume(char* myEngineVolume)
{
	strcpy(engineVolume, myEngineVolume);
}

void car::setColor(char* myColor)
{
	strcpy(color, myColor);
}

void car::print()
{
	printf("Make is: %s\nModel is: %s\nEngineVolume is: %s\nColor is: %s\n", this->getMake(), this->getModel(), this->getEngineVolume(), this->getColor());
}

car::car()
{
}

car::~car()
{
}