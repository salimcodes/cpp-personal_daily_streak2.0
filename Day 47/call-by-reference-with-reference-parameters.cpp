#include <iostream>

using namespace std;

void GetNumbers(int &);
int main()
{
	int number;
	number = 34;
	GetNumbers(number);
	system("Pause");
	return 0;
}


void GetNumbers(int &a)
{
	cout << "My name is Salim and here is the integer " << a << endl;
}
