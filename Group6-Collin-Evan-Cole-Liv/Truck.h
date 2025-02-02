#pragma once
#include "Location.h"
#include "Driver.h"

//Truck object class
class Truck {

	//Truck must have driver and location
	Driver driver;
	Location location;

public:

	//Sets the truck driver to a truck
	void setTruckDriver(Driver&);
	//Sets the location to a truck
	void setTruckLocation(double, double);

	//Calculate the distance from one truck to another truck using its location variables
	double distanceFrom(Truck);
	double distanceFrom();

};