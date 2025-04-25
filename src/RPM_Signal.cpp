#include "RPM_Signal.h"
#include "CANSignal.h"
#include <iostream>

RPM_Signal::RPM_Signal(int id, const std::string& name, double initialValue)
	: CANSignal(id, name, initialValue) {}

void RPM_Signal::update(double newValue) {
	if (newValue < 0) {
		std::cout << "[Warning] RPM can't be negative. Ignoring value: " << newValue << std::endl;
		return;
	}
	CANSignal::update(newValue);
}