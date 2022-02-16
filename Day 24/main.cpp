#include <iostream>
using namespace std;

struct Student
{
	char name[50];
	int age;
};

void GetInfo(Student*);
int main()
{
	Student Howard;
	GetInfo(&Howard);

	cout << "My name is " << Howard.name << endl;
	system("Pause");
};
void GetInfo(Student *Salim)
{
	strcpy(Salim->name, "Salim Oyinlola");
	Salim->age = 19;
}