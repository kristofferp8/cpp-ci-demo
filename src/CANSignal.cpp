#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <iostream>
#include "CANSignal.h"

CANSignal::CANSignal(int id, const std::string& name, double initialValue)
	: id(id), name(name), value(initialValue), timestamp(std::chrono::system_clock::now()){}

void CANSignal::update(double newValue) {
	value = newValue;
	timestamp = std::chrono::system_clock::now();
}

void CANSignal::print() const {
	std::time_t t = std::chrono::system_clock::to_time_t(timestamp);
	std::cout << "Signal [" << id << "] " << name << " = " << value
		<< " at " << std::ctime(&t);
}