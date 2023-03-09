#include "Dice.hpp"
#include<ctime>

using namespace mechanics;


std::string Dice::printSomething() const
{
	class dice
	{
	public:
		int number;
		dice()
		{
			srand(time(NULL) + rand());
			number = rand() % 6 + 1;
		}
		void roll()
		{
			srand(time(NULL) + rand());
			number = rand() % 6 + 1;
		}
	};
}
