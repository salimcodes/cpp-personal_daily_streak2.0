#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/*
Write a complete C++ program that asks the user to enter a character string. 
Send the string to a function called ReverseIt. 
This function will fill a second string so that the original string is reversed. 
Limit the size of the strings to fifty characters. 
The last character in the original string (before the null) should be the first character of the second string. 
Incorporate a loop so that the user can continue to enter strings until he or she chooses to stop.
*/

string ReverseIt(char[50]);

int main()
{
	char answer;
	do
	{
	char Input[50];
	char Output[50];
	cout << "The output is " << ReverseIt(Input) << endl;
	cout << "Do you want to run this again? [Y for Yes or N for No]" << endl;
	cin >> answer;
	cin.ignore();
	}while(answer == 'Y');
	system("Pause");
	return 0;
}


string ReverseIt(char[50])
{
	char fInput[50];
	char fOutput[50];
	cout << "Enter the input: " << endl;
	cin.getline(fInput, 50);
	int Length = strlen(fInput);

	for(int i=0; i<Length; ++i)
	{
		fOutput[i] = fInput[Length-i-1];
		fOutput[Length] = '\0';
	}
	return fOutput;
}
