#include <iostream>
using namespace std;

//Arrays and Structures

struct Student
{
	char name[40];
	char course[60];
};
int main()
{

	Student students[50];
	strcpy(students[30].name, "Melissa Williams"); //Filling the 31st element of the 50 students provided
	system("Pause");
}
