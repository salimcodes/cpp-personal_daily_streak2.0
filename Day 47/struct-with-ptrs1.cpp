#include <iostream>
using namespace std;

struct Student
{
	char name[40];
	int matric_mumber;
};

void GetStudentInformation(Student*);

int main()
{

	Student classic;
	GetStudentInformation(&classic);
	cout << "The student's name is " << classic.name << endl;
	cout << "The student's matric number is " << classic.matric_mumber << endl;

	system("Pause");
	return 0;
}



void GetStudentInformation(Student *ptrStudent)
{
	ptrStudent->matric_mumber = 160304021;
	strcpy(ptrStudent->name, "Indiana Jones");
}
