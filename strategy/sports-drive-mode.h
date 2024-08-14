#pragma once

#include "drive-mode.h"
#include <iostream>

class SportsDriveMode : public DriveMode {
public:
	void drive() override {
		std::cout << "Driving in sports mode" << std::endl;
	}

};
