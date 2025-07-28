#include "Truck.h"


Truck::Truck() : Vehicle(), cargoCapacity(0.0) {}
Truck::Truck(string make, string  model, int year, double  cargoCapacity) :
	Vehicle(make, model, year), cargoCapacity(cargoCapacity) {}

Truck::Truck(Truck& otherTruck) : Vehicle(otherTruck), cargoCapacity(otherTruck.cargoCapacity) {}

double Truck::getCargoCapacity() {
	return cargoCapacity;
}
void Truck::setCargoCapacity(double cargoCapacity) {
	this->cargoCapacity = cargoCapacity;
}
Truck& Truck::operator=(Truck& otherTruck) {
	if (this != &otherTruck) {
		Vehicle::operator=(otherTruck);
		cargoCapacity = otherTruck.cargoCapacity;
	}
	return *this;
}
std::ostream& operator<<(std::ostream& strm, Truck& truck) {
	strm << " A " << truck.getMake() << " " << truck.getModel() << " "
		<< truck.getYear() << " " << truck.getCargoCapacity();
}
