#include "../external/catch.hpp"
#include "../src/CANSignal.h"

TEST_CASE("CANSignal basic functionality", "[CANSignal]") {
	CANSignal signal(1, "Testsignal", 100.0);

	REQUIRE(signal.getId() == 1);
	REQUIRE(signal.getName() == "Testsignal");
	REQUIRE(signal.getValue() == 100.0);

	signal.update(200.0);
	REQUIRE(signal.getValue() == Approx(200.0));
}