#pragma once
#include "vehicle.h"
#include "sports-drive-mode.h"

class SportsVehicle : public Vehicle {
public: 
	SportsVehicle() :Vehicle(new SportsDriveMode()) {
		
	}
};