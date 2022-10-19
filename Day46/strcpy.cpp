#include <iostream>
using namespace std;

struct StudentBranch
{
	char Chairman[50];
	char ViceChairman[50];
	char Secretary[50];
	char PRO[50];
	float AccountBalance;
};

int main()
{
	StudentBranch Unilag;
	strcpy(Unilag.Chairman, "Abdul Qowwiyu Adelaja");
	strcpy(Unilag.ViceChairman, "Samson Ilesanmi");
	strcpy(Unilag.Secretary, "Sarah");
	strcpy(Unilag.PRO, "Salim Oyinlola");
	Unilag.AccountBalance = 400.545; 
	system("Pause");
  return 0;
}
