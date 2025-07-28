#include "Motorcycle.h"

// Default constructor
Motorcycle::Motorcycle() : make(""), model(""), year(0), engineCC(0.0) {}

// Parameterized constructor
Motorcycle::Motorcycle(std::string make, std::string model, int year, double engineCC)
  : make(make), model(model), year(year), engineCC(engineCC) {
}

// Copy constructor
Motorcycle::Motorcycle(const Motorcycle& otherMotorcycle) {
  make = otherMotorcycle.make;
  model = otherMotorcycle.model;
  year = otherMotorcycle.year;
  engineCC = otherMotorcycle.engineCC;
}

// Getter for engineCC
double Motorcycle::getEngineCC() const {
  return engineCC;
}

// Setter for engineCC
void Motorcycle::setEngineCC(double engineCC) {
  this->engineCC = engineCC;
}

// Assignment operator
Motorcycle& Motorcycle::operator=(const Motorcycle& otherMotorcycle) {
  if (this != &otherMotorcycle) {
    make = otherMotorcycle.make;
    model = otherMotorcycle.model;
    year = otherMotorcycle.year;
    engineCC = otherMotorcycle.engineCC;
  }
  return *this;
}

// Output operator
std::ostream& operator<<(std::ostream& strm, const Motorcycle& motorcycle) {
  strm << "Make: " << motorcycle.make
    << ", Model: " << motorcycle.model
    << ", Year: " << motorcycle.year
    << ", Engine CC: " << motorcycle.engineCC;
  return strm;
}