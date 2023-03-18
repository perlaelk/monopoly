#ifndef MECHANICS_DICE_HPP
#define MECHANICS_DICE_HPP
#include <random>

namespace mechanics
{
   class Dice {
   private:
      std::random_device m_randomDevice;
   public:
      Dice() = default;
      Dice(const Dice&) = delete;
      Dice &operator=(const Dice&) = delete;

      int roll();
   };
}

#endif
