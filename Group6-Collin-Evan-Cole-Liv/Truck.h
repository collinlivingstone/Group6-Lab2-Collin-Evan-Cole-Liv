#pragma once
#include "Location.h"
#include "Driver.h"


class Truck {

	Driver driver;
	Location location;

public:

	//Get and set truck driver
	void setTruckDriver(Driver&);

	void setTruckLocation(double, double);

	//Calculate the distance from one truck to another truck using its location variables
	double distanceFrom(Truck);
	double distanceFrom();

};