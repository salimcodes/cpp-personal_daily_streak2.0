#include <iostream>
#include <string>

using namespace std;


void PrintStudentInfo(string name = "Nil", int matricNumber = 180000000);
int main()
{
	//string MyName = "Salim Oyinlola";
	//int Matric = 18040363;

	PrintStudentInfo();
	PrintStudentInfo("Salim Oyinlola");
	PrintStudentInfo("Salam Oyeleke", 180404289);
	system("Pause");
	return 0;
}

void PrintStudentInfo(string name, int matricNumber)
{
	cout << "The student's name is " << name << " and the student's matric number is  " << matricNumber << endl;
}
