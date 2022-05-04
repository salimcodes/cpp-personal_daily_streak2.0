#include <iostream>
using namespace std;
struct Gang
{
	char Topboy[50];
	char Supplier[40];
};
void ReturnGangInfo(Gang);

int main()
{
	Gang SH;
	cout << "Who is the TopBoy? " << endl;
	cin.getline(SH.Topboy,  50);
	cout << "What is the supplier's name? " << endl;
	cin.getline(SH.Supplier, 50);

	ReturnGangInfo(SH);
	system("Pause");
}

void ReturnGangInfo(Gang Summerhouse)
{
	cout << "The leader of the gang is " << Summerhouse.Topboy << endl;
	cout << "The supplier of the gang is " << Summerhouse.Supplier << endl;
}