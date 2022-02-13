#include <iostream>
using namespace std;

struct Student
{
	int age;
};

void GetInfo(Student *);
int main()
{
	Student Ademola;
	GetInfo(&Ademola);
	cout << Ademola.age << endl;
	system("Pause");
}

void GetInfo(Student *Salim)
{
	Salim->age = 56;
	
}