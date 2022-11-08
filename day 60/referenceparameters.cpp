#include <iostream>
using namespace std;

void FillNumbers(int &a, int &b);
int main()
{
	int x, y;
	FillNumbers(x, y);
	cout << "The numbers are " << x << " and " << y << endl; 
	system("Pause");
	return 0;
}

void FillNumbers(int &a, int &b)
{
	a = 29;
	b = 20;
}
