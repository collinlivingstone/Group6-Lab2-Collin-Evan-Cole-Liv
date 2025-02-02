#pragma once

#include <iostream>;
using namespace std;

//Driver class
class Driver {

	string firstName;
	string lastName;
	int driverID;
	int truckID;

public:

	//Getters and setters for drivers first and last name
	void setFirstName(string);
	string getFirstName();

	void setLastName(string);
	string getLastName();

	//Getters and setters for driver ID number
	void setDriverID(int);
	int getDriverID();

	//Getters and setters for truck ID number
	void setTruckID(int);
	int getTruckID();

};