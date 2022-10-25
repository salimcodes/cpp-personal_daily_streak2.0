#include <iostream>

using namespace std;

struct Roommates
{
	char name[50];
	int age;
	char bonafide[50];
};
int main()
{
	cout <<  "I am awesome" << endl;
	Roommates Salim;
	strcpy(Salim.name, "Salim Oyinlola");
	Salim.age = 20;
	strcpy(Salim.bonafide, "Dawg Doggie");

	cout << "My name is " << Salim.name << " and I am " << Salim.age << " years old. My bonafide is " << Salim.bonafide << endl;
	system("Pause");
	return 0;
}
