#include <iostream>
#include <string>
using namespace std;

// Practing call by reference with struct


struct Power_Cast
{
	char name[50];
	int age_approx;
	bool in_the_game;
};

void GetInfo(Power_Cast*);
int main()
{
	Power_Cast Riq;
	GetInfo(&Riq);

	cout << Riq.age_approx << endl;
    //system("Pause");
}


void GetInfo(Power_Cast *Number1)
{
	//strcpy("Tariq St. Patrick", Number1->name);
	Number1->age_approx = 19;
	Number1->in_the_game = true;
}
