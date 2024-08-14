#pragma once
#include "vehicle.h"
#include "sports-drive-mode.h"

class OffRoadVehicle : public Vehicle {
public: 
	OffRoadVehicle() :Vehicle(new SportsDriveMode()) {
		
	}
};