#include <iostream>
using namespace std;

struct Nation
{
	char Continent[50];
	char Capital[50];
};
struct Player
{
	char Name[50];
	int Age;
	Nation Nationality;
};

void PrintPlayerInfo(Player);
int main()
{
	Player playerAA;
	cout << "Enter the footballer's name: " << endl;
	cin.getline(playerAA.Name, 50);
	cout << "Enter the footballer's age: " << endl;
	cin >> playerAA.Age;
	cin.ignore();
	cout << "Enter the continent where the footballer's country of birth is located: " << endl;
	cin.getline(playerAA.Nationality.Continent, 50);
	cout << "Enter the capital of the footballer's country of birth: " << endl;
	cin.getline(playerAA.Nationality.Capital, 50);

	PrintPlayerInfo(playerAA);
	system("Pause");
}

void PrintPlayerInfo(Player playerA)
{
	cout << "The name of the footballer is " << playerA.Name << endl;
	cout << "The footballer is " << playerA.Age << " years old. " << endl;
	cout << "The footballer comes from a country in " << playerA.Nationality.Continent << endl;
	cout << "The capital of the country is " << playerA.Nationality.Capital << endl;
}