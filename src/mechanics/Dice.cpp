#include "Dice.hpp"

#include <random>

using namespace mechanics;
int Dice::roll() 
{ 
   static std::uniform_int_distribution <int> randomValueGenerator(1, 6);
   return randomValueGenerator(m_randomDevice);
}
