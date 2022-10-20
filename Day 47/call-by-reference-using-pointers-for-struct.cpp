#include <iostream>
using namespace std;


struct Player
{
	char name[50];
	int age;
};

void getPlayer(Player *);
int main()
{
	Player goat;
	getPlayer(&goat);
	system("Pause");
	return 0;
}

void getPlayer(Player *Ronaldo)
{
	Ronaldo->age = 37;
	strcpy(Ronaldo->name, "Cristiano");
}
