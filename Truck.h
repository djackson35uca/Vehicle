#ifndef TRUCK
#define TRUCK
#include "Vehicle.h"
class Truck : public Vehicle
{
private:
    double cargoCapacity;
public:
    Truck();
    Truck(string make, string  model, int year, double  cargoCapacity);
    Truck(Truck& otherTruck);
    double getCargoCapacity();
    void setCargoCapacity(double cargoCapacity);
    Truck& operator=(Truck& otherTruck);
    friend std::ostream& operator<<(std::ostream& strm, Truck& truck);

};
#endif