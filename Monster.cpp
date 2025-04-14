#include "Monster.h"
#include <ctime>
#include <random>


int AMonster::Move()
{
	std::mt19937 gen(std::random_device{}());
	std::uniform_int_distribution<> dist(1, 1000);

	AMonster* _Monster = new AMonster();
	_Monster->Speed = dist(gen);

	return _Monster->Speed;
}
