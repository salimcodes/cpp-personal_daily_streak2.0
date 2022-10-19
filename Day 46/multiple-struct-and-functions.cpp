#include <iostream>
using namespace std;

struct Player
{
	char Name[50];
	int RatingOn2k;
	bool EverWonMVP;
};

struct Coach
{
	char Name[50];
	bool UsedToBeAPlayer;
};


struct NbaTeam
{
	char Name[50];
	Coach OurCoach;
	Player BestPlayer;
	bool IsMakingPlayoffs;
};

NbaTeam GetTeam();
int main()
{
	char answer;
	do
	{
		NbaTeam MyFavourite;
		MyFavourite = GetTeam();
		cout << "I have been able to use structs to define the struct, and my favourite team is " << MyFavourite.Name << endl;
		cout << "Will you like to do this again? [Y/N]" << endl;
		cin >> answer;
		cin.ignore();
	}while(answer == 'y' || answer == 'Y');
	
	system("Pause");
	return 0;
};


NbaTeam GetTeam()
{
	NbaTeam PseudoTeam;
	cout << "Enter team name: " << endl;
	cin.getline(PseudoTeam.Name, 50);
	cout << "Enter team's coach name: " << endl;
	cin.getline(PseudoTeam.OurCoach.Name, 50);
	cout << "Enter franchise player's name: " << endl;
	cin.getline(PseudoTeam.BestPlayer.Name, 50);
	cout << "Enter franchise player's rating on 2K23: " << endl;
	cin >> PseudoTeam.BestPlayer.RatingOn2k;
	return PseudoTeam;
}
