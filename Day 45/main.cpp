#include <iostream>
#include <string>
using namespace std;


int PrintNumber();
struct Student
{
	string Name;
	int Matric_Number;
};
int main()
{
	int numbre;
	cout << "I am getting better at this" << endl;
	numbre = PrintNumber();
	cout << "The number is " << numbre << endl;

	Student Salim;
	cout << "Enter your first name: " << endl;
	cin >> Salim.Name;
	cout << "Enter your matriculation number: " << endl;
	cin >> Salim.Matric_Number;
	cout << "My name is " << Salim.Name << " and my matriculation number is " << Salim.Matric_Number << "." << endl;
	system("Pause");
}

int PrintNumber()
{
	int number;
	cout << "Enter number: " << endl;
	cin >> number;
	return number;
}