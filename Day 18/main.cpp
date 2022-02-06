#include <iostream>
using namespace std;

struct Student
{
	char name[40];
	int matric_number;
}student1;

void RandomProgram(Student*);
int main()
{
	Student studentmain;
	RandomProgram(&studentmain);

	cout << "My name is " << studentmain.name << endl;
	cout << "My matriculation number is " << studentmain.matric_number << endl;
	system("Pause");
}

void RandomProgram(Student *student1)
{
	strcpy(student1->name, "Gareth Bale");
	student1->matric_number = 25788262;
}