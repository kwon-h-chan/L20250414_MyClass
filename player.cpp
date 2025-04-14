#include "Player.h"
#include <ctime>
#include <random>


int APlayer::Move()
{
	std::mt19937 gen(std::random_device{}());
	std::uniform_int_distribution<> dist(1, 1000);

	APlayer* _Player = new APlayer();
	_Player->Speed = dist(gen);

	return _Player->Speed;
}
