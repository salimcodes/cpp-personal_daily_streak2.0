#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/*

Write a complete C++ program that asks the user to enter a character string. 
Send the string to a function called ReverseIt. 
This function will fill a second string so that the original string is reversed. 
Limit the size of the strings to fifty characters. The last character in the original 
string (before the null) should be the first character of the second string. 
Incorporate a loop so that the user can continue to enter strings until he or she chooses to stop.
*/

string ReverseIt(char Input[50]);
int main()
{
	char Inn[50];
	char Outn[50];
	cout << "Enter the input: " << endl;
	cin.getline(Inn, 50);
	cout << "the reverse is " << ReverseIt(Inn) << endl;
	system("Pause");
	return 0;
}

string ReverseIt(char Input[50])
{
	char Output[50];
	int length = strlen(Input);
	for(int i =0; i < length; ++i)
	{
		Output[i] = Input[length-i-1];
		Output[length] = '\0';
	}
	return Output;
}
