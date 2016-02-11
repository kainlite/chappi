#include "gmock/gmock.h"
#include "../src/user.h"

// TEST_GROUP(UserTests) {
// }

TEST(UserTests, CreatesANewUserWithName) {
	User user("Jhony");

	EXPECT_EQ("Jhony", user.name());
}