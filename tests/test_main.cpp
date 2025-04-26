#define CATCH_CONFIG_RUNNER
#include "../external/catch.hpp"

// argc
int main(int argc, char* argv[]) {
	Catch::Session session;

	const char* customArgs[] = { argv[0], "--success" };
	int fakeArgc = sizeof(customArgs) / sizeof(customArgs[0]);

	return session.run(fakeArgc, const_cast<char**>(customArgs));
}