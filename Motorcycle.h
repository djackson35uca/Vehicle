#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <iostream>
#include <string>

class Motorcycle {
private:
  std::string make;
  std::string model;
  int year;
  double engineCC;

public:
  // Constructors
  Motorcycle();
  Motorcycle(std::string make, std::string model, int year, double engineCC);
  Motorcycle(const Motorcycle& otherMotorcycle);

  // Getter and Setter
  double getEngineCC() const;
  void setEngineCC(double engineCC);

  // Assignment operator
  Motorcycle& operator=(const Motorcycle& otherMotorcycle);

  // Friend function for output operator
  friend std::ostream& operator<<(std::ostream& strm, const Motorcycle& motorcycle);
};

#endif // MOTORCYCLE_H 