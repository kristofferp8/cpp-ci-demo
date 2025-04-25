#include "Gear_Signal.h"
#include "CANSignal.h"
#include <iostream>

Gear_Signal::Gear_Signal(int id, const std::string name, double initialValue)
	: CANSignal(id, name, initialValue){}

void Gear_Signal::update(double newValue) {
	double previousValue = getValue();
	if (newValue < 0) {
		std::cout << "[Warning] Gear can't be negative. Ignoring value: " << newValue << std::endl;
		return;
	}
	else if (newValue > 6) {
		std::cout << "[Warning] Gear can't be above 6. Ignoring value: " << newValue << std::endl;
		newValue = previousValue;
	}
	CANSignal::update(newValue);
}