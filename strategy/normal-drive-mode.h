#pragma once

#include "drive-mode.h"
#include <iostream>

class NormalDriveMode : public DriveMode {
public:
	void drive() override {
		std::cout << "Driving in normal mode" << std::endl;
	}

};
