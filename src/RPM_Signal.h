#ifndef RPM_SIGNAL_H
#define RPM_SIGNAL_H
#include "CANSignal.h"

class RPM_Signal : public CANSignal {
public:
	RPM_Signal(int id, const std::string& name, double initialValue);

	void update(double newValue) override;
};

#endif // RPM_SIGNAL_H