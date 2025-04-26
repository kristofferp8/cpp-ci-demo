#include "../external/catch.hpp"
#include "../src/RPM_Signal.h"

TEST_CASE("RPM_Signal ignores negative values", "[RPM_Signal]") {
	RPM_Signal rpm(1, "EngineRPM", 800.0);

	REQUIRE(rpm.getId() == 1);
	REQUIRE(rpm.getName() == "EngineRPM");
	REQUIRE(rpm.getValue() == Approx(800.0));

	rpm.update(1000.0);
	REQUIRE(rpm.getValue() == Approx(2000.0));

	rpm.update(-100.0);
	REQUIRE(rpm.getValue() == Approx(1000.0));
}