#include <iostream>
#include <string>
using namespace std;

struct Student
{
	char Name[40];
	char SSN[12];
	int dept;
	float gpa;
};

void GetStudentInfo(Student *);
int main()
{

	Student MyStudent;
	GetStudentInfo(&MyStudent);

	cout << MyStudent.Name << endl;
	system("Pause");
}

void GetStudentInfo(Student *temp_ptr)
{
	strcpy(temp_ptr->Name, "J,E. White");
	strcpy(temp_ptr->SSN, "555-11-5555");
	temp_ptr->dept = 1;
	temp_ptr->gpa = 3.8;
}