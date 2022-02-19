#include <iostream>
#include <string.h>
using namespace std;

struct Bird
{
	char Species[50];
	int count;
	char location[25];
};

struct B_watcher
{
	char Name[50];
	int qualification_code;
};

void WatchTheBirdie(Bird *, B_watcher *);
void WhatDoYouSee(Bird *, B_watcher *);
int main()
{
	Bird birdie; 
	B_watcher person;

	cout << " \n Watch the Bird Program \n ";
	WatchTheBirdie(&birdie, &person);
	WhatDoYouSee(&birdie, &person);
	system("Pause");
}



void WatchTheBirdie(Bird *B_ptr, B_watcher *BW_ptr)
{
	strcpy(B_ptr->Species, "sparrow hawk");
	B_ptr->count = 3;
	strcpy(B_ptr->location, "Sandia Mountains");
	strcpy(BW_ptr->Name, "Ryan Andrew");
	BW_ptr->qualification_code = 5;
}

void WhatDoYouSee(Bird *B_ptr, B_watcher *BW_ptr)
{
	cout << "\n Watcher: " << BW_ptr->Name;
	cout << "\n Qualification: " << BW_ptr->qualification_code;
	cout << "\n Species: " << B_ptr->Species;
	cout << "\n Count: " << B_ptr->count << endl;
}