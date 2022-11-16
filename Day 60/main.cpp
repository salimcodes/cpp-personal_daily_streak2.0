#include <iostream>
using namespace std;

struct Student
{
	char name[50];
	int age;
};

void DisplayInfo(Student);
int main()
{

	Student s2;
	s2.age = 34;
	strcpy(s2.name, "Salim Oyinlola");
	DisplayInfo(s2);
	system("Pause");
	return 0;
}

void DisplayInfo(Student s1)
{
	cout << "Your name is " << s1.name << " and your age is " << s1.age << endl;
}
