#include "Truck.h"

//Set the data for a new truck object
void Truck::setTruckDriver(Driver& driver) { this->driver = driver; }

//Calculate the distance from one truck (initiater) to another truck using its location variables
double Truck::distanceFrom(Truck truck) {

	double distance = sqrt(pow(this->location.getLocX() - truck.location.getLocX(), 2) + pow(this->location.getLocY() - truck.location.getLocY(), 2));
	return distance;

}

//Calculate the single distance of a truck to the origin (overloaded) - it deaults to origin point without a truck
double Truck::distanceFrom() {

	double distance = sqrt(pow(this->location.getLocX(), 2) + pow(this->location.getLocY(), 2));
	return distance;

}

//Set an (x,y) location of the truck using 2 double variables
void Truck::setTruckLocation(double x, double y) {

	this->location.setLocX(x);
	this->location.setLocY(y);

}


 