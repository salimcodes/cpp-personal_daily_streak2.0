#include <iostream>

using namespace std;

/*
Write a structure tag and short main program that sets up a struct for a 
Super Eagles player that contains his name, earned run average (ERA), and team. 
In the program, declare one pitcher variable and pass its address to a function called Smokin’. 
This function fills the pitcher variable with the following information:
Name: Mikel Obi ERA: $ 10 million
Team: Chelsea
*/

struct SuperEaglesPlayer
{
	char name[50];
	char ERA[50];
	char team[50];
};

SuperEaglesPlayer Smokin(SuperEaglesPlayer);

int main()
{
	SuperEaglesPlayer captain;
	captain = Smokin(captain);
	cout << captain.name << " THE NAME " << captain.ERA << " THE ERA " << captain.team << " THE TEAM." << endl;
	system("Pause");
	return 0;
}

SuperEaglesPlayer Smokin(SuperEaglesPlayer PseudoPlayer)
{
	strcpy(PseudoPlayer.name, "Mike Obi");
	strcpy(PseudoPlayer.ERA, "$10 Million");
	strcpy(PseudoPlayer.team, "Chelsea");
	return PseudoPlayer;
}
