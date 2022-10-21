#include <iostream>
#include <string>
using namespace std;

void Info(string = "Nil", int = 0);
int main()
{

	Info("Salim");
	Info("Obinna", 27);
	Info();
	system("Pause");
	return 0;
}
void Info(string name, int age)
{
	 cout << "My name is " << name << " and I am " << age << " years old." << endl;
}
