#include <iostream>
#include "World.h"
#include "Monster.h"
#include "Player.h"

using namespace std;

int main()
{
	APlayer* Player = new APlayer();
	AMonster* Monster = new AMonster();

	int PlayerSpeed = Player->Move();
	int MonsterSpeed = Monster->Move();

	cout << "Player Speed : " << PlayerSpeed 
		<< "  " << "Monster Speed : " << MonsterSpeed << endl;

	if (PlayerSpeed > MonsterSpeed)
	{
		cout << "플레이어가 도망갔습니다." << endl;
	}
	else if (PlayerSpeed < MonsterSpeed)
	{
		cout << "플레이어가 잡혔습니다." << endl;
	}
	else
	{
		cout << "1000분의 1 확률에 당첨 되었습니다.";
	}

	return 0;
}