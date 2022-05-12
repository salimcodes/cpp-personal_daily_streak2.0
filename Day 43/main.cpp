#include <iostream>

using namespace std;

struct Basketballer
{
	char Name[50];
	char Team[50];
	int JerseyNumber;
};

void ReturnValues(Basketballer);
int main()
{
	Basketballer Player1;
	cout << "Enter the name of the basketball player: " << endl;
	cin.getline(Player1.Name, 50);
	cout << "Enter the team the basketball player plays: " << endl;
	cin.getline(Player1.Team, 50);
	cout << "Enter the player's jersey number: " << endl;
	cin >> Player1.JerseyNumber;
	ReturnValues(Player1);
	system("Pause");
}

void ReturnValues(Basketballer player)
{
	cout << "The player's name is " << player.Name << endl;
	cout << "The player's team is " << player.Team << endl;
	cout << "The player's jersey number is " << player.JerseyNumber << endl;
}