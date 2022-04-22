#include <iostream>
using namespace std;

struct Most_Interacted
{
	char handle[50];
	char interest[50];
};

struct Person
{
	char handle[50];
	int number_followers;
	int number_following;
	Most_Interacted friends;
};

void ReturnDetails(Person);
int main()
{
	Person Salim;
	cout << "Enter your handle: " << endl;
	cin.getline(Salim.handle, 50);
	cout << "Enter your number of followers: " << endl;
	cin >> Salim.number_followers;
	cout << "Enter your number people you are following: " << endl;
	cin >> Salim.number_following;
	cin.ignore();
	cout << "What is the handle of the person you interact with most? " << endl;
	cin.getline(Salim.friends.handle, 50);

	ReturnDetails(Salim);
	system("Pause");
}

void ReturnDetails(Person Saz)
{
	cout << Saz.handle << " has " << Saz.number_followers << " followers." << endl;
}
