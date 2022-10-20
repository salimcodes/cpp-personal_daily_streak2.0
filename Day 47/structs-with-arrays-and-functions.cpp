#include <iostream>
using namespace std;

struct student
{
	char Name[40];
	int matric_number;
};

void GetName(student[]);

int main()
{
	student y[10];
	GetName(y);
	cout << "the king is " << y[0].Name << endl;

	system("Pause");
	return 0;
}

void GetName(student x[])
{
	strcpy(x[0].Name, "Erik ten Hag");
	x[0].matric_number = 180301;

	strcpy(x[1].Name, "David De Gea");
	x[1].matric_number = 180302;

	strcpy(x[2].Name, "Victor Lindelof");
	x[2].matric_number = 180303;

	strcpy(x[3].Name, "Eric Bailly");
	x[3].matric_number = 180304;

	strcpy(x[4].Name, "Phil Jones");
	x[4].matric_number = 180305;

}
