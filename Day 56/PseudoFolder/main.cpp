#include <iostream>
using namespace std;
#include "Student.h"
#include <string.h>


int main()
{
	Student Salim;
	strcpy(Salim.Name, "Salim Oyinlola");
	strcpy(Salim.Age, "21");
	cout << Salim.Name << endl;
	cout << Salim.Age << endl;
	system("Pause");
	return 0;
}