#include "Dice.hpp"
#include<ctime>

using namespace mechanics;
class Dice {

private:
    int face;
    int value;

public:
    int getFace()
    {
    };

    int getVal()
    {
        int dice1;
        int dice2;
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
    };

    int roll() { return rand() % 6 + 1; }
    Dice() : face(6) {};
    Dice(int size) : face(size) {};

};


