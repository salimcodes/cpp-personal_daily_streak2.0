#include <iostream>
#include <string>
using namespace std;
//using tags

struct Lecturer
{
	string course_taught;
	int class_of_first_degree;
	string highest_degree_held;
	bool is_wicked;
}my_lecturer, your_lecturer;

int main()
{
	
	my_lecturer.course_taught = "Physical Electronics";
	my_lecturer.class_of_first_degree = 2;
	my_lecturer.highest_degree_held = "Doctorate";
	my_lecturer.is_wicked = false;

	your_lecturer.course_taught = "Engineering Applied Mathematics";
	your_lecturer.class_of_first_degree = 1;
	your_lecturer.highest_degree_held = "Doctorate";
	your_lecturer.is_wicked = false;
	system("Pause");
}