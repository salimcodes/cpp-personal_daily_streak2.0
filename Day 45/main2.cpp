/*
Write a structure tag and short main program that sets up a struct for a baseball pitcher that
contains his name, earned run average (ERA), 
innings pitched and strikeout percentage. 
In the program, declare one pitcher variable and pass its address to a function called Smokin’. 
This function fills the pitcher variable with the following information:
Name: Smokin’ Joe Green ERA: 1.2
Innings pitched: 55 Strikeout percentage: 0.25
Once the data is in the structure, write the pitcher information to the screen.
*/

#include <iostream>
using namespace std;

struct Pitcher
{
	char Name[50];
	float ERA;
	float strikeout_percentage;
};

Pitcher GetInfo(int);

int main()
{
	char answer;
	do
	{
		cout << "My name is Salim." << endl;
		Pitcher PitcherOne;
		PitcherOne = GetInfo(45);
		cout << "My name is " << PitcherOne.Name << endl;
		cout << "The ERA is " << PitcherOne.ERA << endl;
		cout << "The strikeout percentage is " << PitcherOne.strikeout_percentage << endl;
		
		cout << "Do you want to perform this operation again? [Y/N]" << endl;
		cin >> answer;
		cin.ignore();
	}while(answer == 'Y' || answer == 'y');

	system("Pause");
	return 0;
}

Pitcher GetInfo(int Grade)
{
	Pitcher PitcherStr;
	cout << "What is your " << Grade << " name?" << endl;
	cin.getline(PitcherStr.Name, 50);

	cout << "What is ERA? " << endl;
	cin >> PitcherStr.ERA;
	
	cout << "What is the strikeout percentage? " << endl; 
	cin >> PitcherStr.strikeout_percentage;
	return PitcherStr;
}
