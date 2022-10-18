#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	char age[10];
	int ageInt;
	cout << "Age? " << endl;
	cin.getline(age,10);
	ageInt = atoi(age);
	cout << "The boy's age is " << ageInt << endl;
	system("Pause");
}