#include <iostream>

using namespace std;


struct Player
{
	char name[50];
	int age;
};


void GetPlayerInfo(Player*);
int main()
{
	Player playerA;
	GetPlayerInfo(&playerA);
	cout << "the player's name is " << playerA.name << " and his age is " << playerA.age << endl;


	system("Pause");
	return 0;
}


void GetPlayerInfo(Player *Player_ptr)
{
	Player_ptr->age = 30;
	strcpy(Player_ptr->name, "Kyrie Irving");
}
