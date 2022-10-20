#include <iostream>

using namespace std;


enum color{red, orange, yellow, green, blue, indigo, violet};

struct Basket
{
	color MyColors;
};
int main()
{

	Basket Hello;
	Hello.MyColors = orange;

	system("Pause");
	return 0;
}
