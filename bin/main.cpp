#include <iostream>
#include "../src/user.h"

int main(int argc, char const *argv[])
{
	User u("Jhony");
	// User u;
	// u.set_name("Jhony");

	std::cout << "Hello " << u.name() << std::endl;
	return 0;
}