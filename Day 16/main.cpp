#include <iostream>

using namespace std;

//Revising structures within structures

struct Hostel_details
{
	char name[50];
	char wing;
	int room_number;
};

struct Student
{
	char name[50];
	int serial_number;
	float CGPA;
	Hostel_details Hostel;
}salim;

int main()
{
	cout << "Input your hostel's name: " << endl;
	cin >> salim.Hostel.name;
	strcpy(salim.name, "Salim Olanrewaju Oyinlola");
	system("Pause");
	return 0;
}
