//Collin
//Evan
//Liv
//Cole
//Group 6

#include <iostream>
#include <cmath>
#include "Location.h"
#include "Driver.h"
#include "Truck.h"
using namespace std;

int main() {
	//Create new drivers
	Driver driver1;
	Driver driver2;

	//Create new trucks
	Truck truck1;
	Truck truck2;

	//Sample data input for driver 1
	driver1.setFirstName("Liz");
	driver1.setLastName("Brian");
	driver1.setDriverID(35);
	driver1.setTruckID(178534);

	//Sample data input for driver 2
	driver2.setFirstName("Mike");
	driver2.setLastName("Smith");
	driver2.setDriverID(69);
	driver2.setTruckID(245817);


	//Sample data for truck 1
	truck1.setTruckDriver(driver1);
	truck1.setTruckLocation(2, 3);

	//Sample data for driver 2
	truck2.setTruckDriver(driver2);
	truck2.setTruckLocation(5, 2);


	//Printing distances information
	cout << "The distance between the two trucks is " << truck1.distanceFrom(truck2) << endl;
	cout << "The distance between the truck (with ID = 178534) and the origin is " << truck1.distanceFrom() << endl;
	cout << "The distance between the truck (with ID = 245817) and the origin is " << truck2.distanceFrom() << endl;
	return 0;
}