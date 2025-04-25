#ifndef Gear_Signal_h
#define Gear_Signal_h
#include "CANSignal.h"

class Gear_Signal : public CANSignal {
public:
	Gear_Signal(int id, const std::string name, double initialValue);
	
	void update(double newValue) override;
};

#endif // Gear_Signal.h
