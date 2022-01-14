#include <iostream>
#include <string>

using namespace std;

/*
Write a structure tag and short main program that sets up a struct for a University student that contains
his name, cumulative grade point average (CGPA), and university . In the program, declare one pitcher
variable and pass its address to a function called Smokin’. This function fills the pitcher variable with the
following information:
Name: Emmanuel Okocha CGPA: 4.70
University: University of Lagos
Once the data is in the structure, write the pitcher information to the screen
*/

struct University_student
{
	string name;
	float CGPA;
	string university;
};

//University_student Smokin();
int main()
{
	University_student smokin;
	smokin.name = "Emmanuel Okocha";
	smokin.CGPA = 4.70;
	smokin.university = "University of Lagos";
	cout << "Name: " << smokin.name << " CGPA: " << smokin.CGPA << endl;
	cout << "University: " << smokin.university << endl;

	system("Pause");
}

//University_student Smokin()
