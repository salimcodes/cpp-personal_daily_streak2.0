#include <iostream>
using namespace std;

enum Color{red = 4, blue, green};
int main()
{
	Color MyColor;
	MyColor = red;

	switch(MyColor)
	{
	case red:
		cout << "red"; 
		break;
	case green:
		cout << "green"; 
		break;
	case blue:
		cout << "blue"; 
		break;
	}

	cout << endl;
	system("Pause");
}