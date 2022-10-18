#include <iostream> 

using namespace std;

struct Student
{
	char Name[50];
	int Age;
	char MatricNumber[15];
	bool IsAScholar;
}Salim;
int main()
{
	strcpy(Salim.Name, "oyinlola salim");
	Salim.Age = 67;
	strcpy(Salim.MatricNumber, "200403012");
	Salim.IsAScholar = false;
	system("Pause");
}