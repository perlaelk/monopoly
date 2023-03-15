#include "User.hpp"
#include<string>
#include<iostream>


using namespace players;
class Player
{
	public:
		Player::Player(const char *name,int turn);
		static int next_id;
		turn = -turn + 1;
		Player::Player(std::string Playername);
	
	private:
		char* name_;
		int turn;
};

