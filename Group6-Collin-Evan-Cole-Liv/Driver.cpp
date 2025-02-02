#include <iostream>
#include <cmath>
#include "Driver.h"

//Class functions for driver

//Getters and setters for drivers first name
void Driver :: setFirstName(string firstName) {this->firstName = firstName;}
string Driver :: getFirstName() {return this->firstName;}

//Getters and setters for drivers last name
void Driver :: setLastName(string lastName) {this->lastName = lastName;}
string Driver :: getLastName() {return this->lastName;}

//Getters and setters for driver ID number
void Driver :: setDriverID(int driverID) {driverID = this->driverID;}
int Driver :: getDriverID() {return this->driverID;}

//Getters and setters for truck ID number
void Driver :: setTruckID(int truckID) {truckID = this->truckID;}
int Driver :: getTruckID() {return this->truckID;}





