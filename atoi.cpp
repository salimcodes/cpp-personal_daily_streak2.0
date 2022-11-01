#include <iostream>
#include <stdlib.h>
using namespace std;


struct Student
{
	char name[50];
	char age[10];
};
int main()
{
	Student me;
	cout << "Enter name: " << endl;
	cin.getline(me.name, 50);
	cout << "Enter age: " << endl;
	cin.getline(me.age, 10);
	int age = atoi(me.age);
	age = age*20;
	cout << "Your name is " << me.name << " and my age is " << age << endl;
	system("Pause");
	return 0;
}
