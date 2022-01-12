#include <iostream>
#include <string>
using namespace std; 

// Practing the multiple struct method with dot operators

struct room_number
{
	char space;
};

struct Student_hostel
{
	string hostel_name;
	char block;
	int a_room_number;
	room_number the_room_number;
};

struct Student
{
	string student_name;
	string student_matric_number;
	int departmental_code;
	Student_hostel hostel;
};

int main()
{
	Student me;
	me.student_name = "Salim Oyinlola";
	me.student_matric_number = "120304050";
	me.departmental_code = 2;
	me.hostel.block = 'A';
	me.hostel.hostel_name = "Jaja";
	me.hostel.a_room_number = 405;
	me.hostel.the_room_number.space = 'B';
	cout << "The student's name is " << me.student_name << endl;
	cout << "The student's matriculation number is " << me.student_matric_number << endl;
	cout << "The student's departmental code is " << me.departmental_code << endl;
	cout << "The student is in " << me.hostel.hostel_name << " hostel. The students is in the " << me.hostel.block << " block." << endl;

	system("Pause");

}