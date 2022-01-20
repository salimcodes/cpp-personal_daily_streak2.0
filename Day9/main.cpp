#include <iostream>

#include <stdlib.h>

using namespace std; 
int main()

// Practing with atol, atoi and atof
{
	char a[50] = "567.67";

	int b;
	b = atoi(a);
	cout << b << endl;

	long c;
	c = atol(a);
	cout << c << endl;

	float d;
	d = atof(a);
	cout << d << endl;

	system("Pause");
}