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
	StudentBranch SB[10];


	strcpy(SB[0].Chairman, "Abdul Qowwiyu Adelaja");
	strcpy(SB[0].ViceChairman, "Samson Ilesanmi");
	strcpy(SB[0].Secretary, "Sarah");
	strcpy(SB[0].PRO, "Salim Oyinlola");
	SB[0].AccountBalance = 400.545; 


	strcpy(SB[1].Chairman, "Abdul Qowwiyu Adeleke");
	strcpy(SB[1].ViceChairman, "Samson Adebiyi");
	strcpy(SB[1].Secretary, "Sandy");
	strcpy(SB[1].PRO, "Salim Oyinloye");
	SB[1].AccountBalance = 20.54373; 

	strcpy(SB[2].Chairman, "Abdul Samad Adelaja");
	strcpy(SB[2].ViceChairman, "Samuel Ilesanmi");
	strcpy(SB[2].Secretary, "Cindy");
	strcpy(SB[2].PRO, "Salam Oyelowo");
	SB[2].AccountBalance = 2530.10; 

	strcpy(SB[3].Chairman, "Abdul Lateef Adeniyi");
	strcpy(SB[3].ViceChairman, "Samson Adeyinka");
	strcpy(SB[3].Secretary, "Sylvester");
	strcpy(SB[3].PRO, "Samad Agun");
	SB[3].AccountBalance = 4.25; 

	strcpy(SB[4].Chairman, "Abdul Rahman Babalola");
	strcpy(SB[4].ViceChairman, "Goodness Ukeje");
	strcpy(SB[4].Secretary, "Twamasi");
	strcpy(SB[4].PRO, "Seun Adewunmi");
	SB[4].AccountBalance = 45; 

	for(int i =0; i<5;++i)
	{
		cout << "The chairman of the first index of the SB " << SB[i].Chairman << "." << endl;
		cout << "The vice chairman of the first index of the SB " << SB[i].ViceChairman << "." << endl;
		cout << "The general secretary of the first index of the SB " << SB[i].Secretary << "." << endl;
		cout << "The pro of the first index of the SB " << SB[i].PRO << "." << endl;
		cout << "The account balance of the first index of the SB " << SB[i].AccountBalance << "." << endl << endl;
	}
	system("Pause");
	return 0;
}