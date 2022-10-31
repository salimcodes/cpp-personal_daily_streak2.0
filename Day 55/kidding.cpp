#include <iostream>
using namespace std;


/*
Write a structure tag and short main program that sets up a struct for a baseball pitcher that
contains his name, earned run average (ERA), innings pitched and strikeout percentage. 
In the program, declare one pitcher variable and pass its address to a function called Smokin’. 
This function fills the pitcher variable with the following information:

Name: Smokin’ Joe Green ERA: 1.2
Innings pitched: 55 Strikeout percentage: 0.25
Once the data is in the structure, write the pitcher information to the screen.
*/

struct Smoking
{
	char name[50];
	int ERA;
	char strikeoutPercentage[50];
};
int main()
{
	Smoking pseudo;
	strcpy(pseudo.name, "Salim Oyinlola");
	pseudo.ERA = 50;
	strcpy(pseudo.strikeoutPercentage,"Fifty percent");

	system("Pause");
	return 0;
}
