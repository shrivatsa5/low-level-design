#pragma once
#include "vehicle.h"
#include "normal-drive-mode.h"

class NormalVehicle : public Vehicle {
public:
	NormalVehicle() : Vehicle(new NormalDriveMode()) {
		
	}
};