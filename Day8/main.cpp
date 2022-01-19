#include <iostream>

using namespace std;

/*
Write a program that lets the user fill
in a single structure with 
the name, address, and phone
number of a single person
*/
struct User
{
	char name[50];
	char address[100];
	char phone_number[11]; //Assuming that the Nigerian phone number has 11 figures.
};
	
int main()
{
	User user1;

	cout << "Enter your name: " << endl; 
	cin.getline(user1.name, 50);
	cout << "Enter your address: " << endl;
	cin.getline(user1.address, 100);
	cout << "Enter your phone number: " << endl;
	cin.getline(user1.phone_number, 11);
	system("Pause");
}