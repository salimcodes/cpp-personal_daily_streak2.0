#include <iostream>

using namespace std;

/*
Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.
1 - Write a function to print the names of all the students having age 14.
2 - Write another function to print the names of all the students having even roll no.
3 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).
*/

struct Store
{
	int roll_no;
	char name[50];
	int age;
	int addresses;
};


int main()
{

	Store student[5];
	for(int i = 0; i < 5; i++)
	{
		cout << "Input roll number: " << endl;
		cin >> student[i].roll_no;
		cin.ignore();
		cout << "Input name: " << endl;
		cin.getline(student[i].name, 40);
		cout << "Input age: " << endl;
		cin >> student[i].age;
		cout << "Input address: " << endl;
		cin >> student[i].addresses;
	}
	cout << endl;
	cout << endl;

	for(int i = 0; i < 5; i++)
	{
		if(student[i].age == 14)
		{
			cout << "List of students aged 14 are: " << student[i].name << endl;
			cout << endl;
		}
	}

	for(int i = 0; i < 5; i++)
	{
		if(student[i].roll_no%2 == 0)
		{
			cout << "List of students with even roll numbers are: " << student[i].name << endl;
			cout << endl;
		}
	}

	for(int i = 0; i < 5; i++)
	{
		if(student[i].roll_no > 0)
		{
			cout << "List of students with roll numbers are: " << student[i].name << endl;
			cout << endl;
		}
	}

	system("Pause");
}



