#include <iostream>
using namespace std;


/*
Write a structure tag and short main program that sets up a struct for a baseball pitcher that
contains his name, earned run average (ERA), innings pitched and strikeout percentage. In 
the program, declare one pitcher variable and pass its address to a function called Smokin’. 
This function fills the pitcher variable with the following information:
Name: Smokin’ Joe Green ERA: 1.2
Innings pitched: 55 Strikeout percentage: 0.25
Once the data is in the structure, write the pitcher information to the screen.
*/

struct Pitcher
{
	char name[50];
	float ERA;
	int innings;
	float StrikeoutPercentage;
};

Pitcher Smokin(void);
int main()
{
	Pitcher instance_two;
	instance_two = Smokin();
	cout << "Name: " << instance_two.name << " ERA: " << instance_two.ERA << endl;
	cout << "Innings pitched: " << instance_two.innings << "  Strikeout percentage: " << instance_two.StrikeoutPercentage << endl;
	system("Pause");
	return 0; 
}


Pitcher Smokin(void)
{
	Pitcher instance_one;
	strcpy(instance_one.name, "Smokin' Joe Green");
	instance_one.ERA = 1.2;
	instance_one.innings = 55;
	instance_one.StrikeoutPercentage = 0.25;
	return instance_one;
}
