#pragma once
#include "drive-mode.h"
#include<iostream>
class Vehicle {
public:
	DriveMode* drive_mode_;
	Vehicle() = default;
	Vehicle(DriveMode* drive_mode) {
		drive_mode_ = drive_mode;
	}

	void drive() {
		drive_mode_->drive();
	}
};