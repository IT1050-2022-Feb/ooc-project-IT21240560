#include <iostream>
#include <cstring>
class Vehicle
{
private:
	char vehicleId[10];
	char vehicleRegistrationNo[10];
	char vehicleType[20];
	char vehicleModel[40];
	char vehicleColour[20];

public:
  Vehicle();
	Vehicle(const char pVehicleId[], const char pVehicleRegistrationNo[], const char pVehicleType[], const char pVehicleModel[], const char pVehicleColour[]);
  void checkAvailablePackages();
  ~Vehicle();
};