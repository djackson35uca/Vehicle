#include "Vehicle.h"

Vehicle::Vehicle() {
	make = "unknown";
	model = "unknown";
	year = 0;
}
Vehicle::Vehicle(string make, string model, int year) {
	this->make = make;
	this->model = model;
	this->year = year;
}
Vehicle::Vehicle(Vehicle& otherVehicle) {
	if (this != &otherVehicle) {
		this->make = otherVehicle.make;
		this->model = otherVehicle.model;
		this->year = otherVehicle.year;
	}
}

string Vehicle::getMake() {
	return make;
}
string Vehicle::getModel() {
	return model;
}
int Vehicle::getYear() {
	return year;
}
void Vehicle::setMake(string make) {
	this->make = make;
}
void Vehicle::setModel(string model) {
	this->model = model;
}
void Vehicle::setYear(int year) {
	this->year = year;
}

Vehicle& Vehicle::operator=(Vehicle& otherVehicle) {
	if (this != &otherVehicle) {
		this->make = otherVehicle.make;
		this->model = otherVehicle.model;
		this->year = otherVehicle.year;
	}
	return *this;
}
std::ostream& operator<<(std::ostream& strm, Vehicle& vehicle) {
	strm << "A " << vehicle.getYear() << " "
		<< vehicle.getMake() << " "
		<< vehicle.getModel();
	return strm;
}