#include <iostream>
#include <string.h>

using namespace std;

struct Student
{
	char Name[40];
	char ID_num[15];
	int dept; 
	float gpa;
};

void GetInfo(Student []);
int main()
{
	Student MyStudent[100];
	GetInfo(MyStudent);
	system("Pause");	
}

void GetInfo(Student x[])
{
	strcpy(x[0].Name, "Melissa");
	strcpy(x[0].ID_num, "123-45-6789");
	x[0].dept = 2;
	x[0].gpa = 3.6;

	strcpy(x[1].Name, "Sue");
	strcpy(x[1].ID_num, "987-65-4321");
	x[1].dept = 1;
	x[1].gpa = 3.7;
}