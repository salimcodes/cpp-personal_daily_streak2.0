#include <iostream>
#include <string>
using namespace std;

void GreetUser();
void GreetUser(string);
void GreetUser(string, string);



int main()
{
	string friendone = "Ajibola";
	string friendtwo = "Ademola";
	string friendthree = "Temitayo";
	GreetUser();
	GreetUser(friendone);
	GreetUser(friendtwo, friendthree);

	system("Pause");
	return 0;
}

void GreetUser()
{
	cout << "Hello friend" << endl;
}

void GreetUser(string friend1)
{
	cout << "Hello " << friend1 << endl;
}

void GreetUser(string friend1, string friend2)
{
	cout << "Hello " << friend1 << " and " << friend2 << endl;
}
