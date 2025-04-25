#ifndef CANSIGNAL_H
#define CANSIGNAL_H

#include <string>
#include <chrono>

class CANSignal {
private:
	int id;
	std::string name;
	double value;
	std::chrono::system_clock::time_point timestamp;
public:
	CANSignal(int id, const std::string& name, double initialValue);

	int getId() {
		return id;
	}

	void setId(int newId) {
		id = newId;
	}

	std::string getName() {
		return name;
	}

	void setName(std::string newName) {
		name = newName;
	}

	double getValue() {
		return value;
	}

	void setValue(double newValue) {
		value = newValue;
	}

	virtual void update(double newvalue);

	void print() const;
};

#endif; //CANSIGNAL_H