#include "gtest/gtest.h"
#include "User.hpp"

TEST(UserTest, MakeSureUserMaKhasso)
{
	players::User user;
	EXPECT_EQ(user.printSomething(), "ma khassak");
}