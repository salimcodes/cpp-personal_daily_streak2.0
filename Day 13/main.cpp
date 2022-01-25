#include <iostream>
using namespace std;

struct Roommates
{
	char name[50];
	char Department[50];
	int level;
	bool Is_bonafide;
	bool Is_Overnight_Expert;
}sample;
int main()
{
	strcpy(sample.name, "Ademola Owodunni");
	strcpy(sample.Department, "Met and Mat Engineering");
	sample.level = 300;
	sample.Is_bonafide = true;
	sample.Is_Overnight_Expert = true;

	cout << "Roommate's name: " << sample.name << endl;
	
	cout << "Roommate's Department: " << sample.Department << endl;

	cout << "Roommate's Level: " << sample.level << endl;
	
	system("Pause");
}