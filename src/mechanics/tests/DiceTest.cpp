#include "gtest/gtest.h"
#include "Dice.hpp"

TEST(DiceTest, MakeSureDiceMaKhasso)
{
	mechanics::Dice dice;
	EXPECT_EQ(dice.printSomething(), "ma khassik");
}
