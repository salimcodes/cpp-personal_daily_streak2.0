#include <iostream>

using namespace std;


void function(int*);
int main()
{
	int num = 6;
	function(&num);
	system("Pause");
	return 0;
}

void function(int *number)
{
	int salim;
	*number = salim + 6;
}
