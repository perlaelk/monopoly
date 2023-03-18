#include "gtest/gtest.h"
#include "Dice.hpp"

TEST(DiceTest, MakeSureDiceRollIsBetweenOneAndSix)
{
	mechanics::Dice dice;
	for (int numberOfRolls = 0; numberOfRolls < 10000; ++numberOfRolls)
	{
		EXPECT_GE(dice.roll(), 1);
		EXPECT_LE(dice.roll(), 6);
	}
}

namespace
{
	template <class Comparator>
	bool runTwoDieRollUntilTrue(int numberOfTrys, const Comparator& comp)
	{
		mechanics::Dice dice1, dice2;
		bool hasComparaisonReturnedTrue = false;
		for (int run = 0; !hasComparaisonReturnedTrue && run < numberOfTrys; ++run)
		{
			hasComparaisonReturnedTrue = comp(dice1.roll(), dice2.roll());
		}
		return hasComparaisonReturnedTrue;
	}
}

TEST(DiceTest, MakeSureTwoDieRolledCanHaveDifferentValues)
{
	EXPECT_EQ(runTwoDieRollUntilTrue(10000, [](int value1, int value2) {
		return value1 != value2;
		}), true);
}

TEST(DiceTest, MakeSureTwoDieRolledCanHaveEqualValues)
{
	EXPECT_EQ(runTwoDieRollUntilTrue(10000, [](int value1, int value2) {
		return value1 == value2;
		}), true);
}
