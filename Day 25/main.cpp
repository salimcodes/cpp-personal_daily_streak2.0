#include <iostream>
using namespace std;

struct Lecturer
{
	char name[50];
	int age;
};

void FillInfo(Lecturer*);
int main()
{
	Lecturer New;
	FillInfo(&New);
	cout << "Your age is " << New.age << endl;

	system("Pause");
}

void FillInfo(Lecturer *Random)
{
	strcpy(Random->name, "El-Shawaary Jack");
	(*Random).age = 45;
}