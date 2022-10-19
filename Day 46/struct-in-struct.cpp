#include <iostream>
using namespace std;

struct Person
{
	char name[50];
	char hostel[50];
	bool isDilligent;
};

struct Class
{
	Person ClassRep;
	char ClassOf[50];
	int NumberOfStudents;
	int NumberOfCourses;
}MyClass;

int main()
{
	strcpy(MyClass.ClassRep.name, "Chisom Edoka");
	strcpy(MyClass.ClassRep.hostel, "Jaja Hall");
	MyClass.ClassRep.isDilligent = true;
	strcpy(MyClass.ClassOf, "2022");
	MyClass.NumberOfCourses = 9;
	MyClass.NumberOfStudents = 145;
	system("Pause");
	return 0;
}