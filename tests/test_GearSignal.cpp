#include "../external/catch.hpp"
#include "../src/Gear_Signal.h"

TEST_CASE("Gear_Signal ignores negative values and values >6", "[Gear_Signal]") {
	Gear_Signal gear(1, "GearMode", 2);

	double badInput = GENERATE(-0.1, -1, -99.9, 7, 7.2, 999.9);

	gear.update(badInput);
	REQUIRE(gear.getValue() == Approx(2)); // Should not change
}