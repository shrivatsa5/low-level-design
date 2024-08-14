// strategy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "sports-vehicle.h"
#include "offroad-vehicle.h"
#include "normal-vehicle.h"

int main()
{
    
	Vehicle *normal_vehicle = new NormalVehicle();
	Vehicle* sports_vehicle = new SportsVehicle();
	Vehicle* offroad_vehicle = new OffRoadVehicle();
	std::vector<Vehicle*>vehicle_list{ normal_vehicle,sports_vehicle ,offroad_vehicle };
	for (auto vehicle : vehicle_list) {
		vehicle->drive();
	}

	delete normal_vehicle;
	delete sports_vehicle;
	delete offroad_vehicle;

	
}

