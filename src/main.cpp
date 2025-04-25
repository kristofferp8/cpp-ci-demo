// cppsignalsim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CANSignal.h"
#include "RPM_Signal.h"
#include "Gear_Signal.h"

int main()
{
	RPM_Signal rpm(100, "EngineRPM", 800);
	Gear_Signal gear(21, "GearMode", 1);

	rpm.print();
	gear.print();
	rpm.update(1800);
	gear.update(2);
	rpm.print();
	gear.print();
	rpm.update(-300);
	gear.update(7);
	rpm.print();
	gear.print();
}

