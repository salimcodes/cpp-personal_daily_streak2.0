#include <iostream>
//#include <string>
using namespace std;

int main()
{
	char answer;
	do{
		char cgpa; 
		cout << "Enter your CGPA: " << endl;
		cin >> cgpa;

		switch(cgpa)
		{
		case '5':
			cout << "You are on a first class" << endl;
			break;
		case '4':
			cout << "You are on a second class upper" << endl;
			break;
		case '3': 
			cout << "You are on a second class lower" << endl;
			break;
		case '2':
			cout << "You are on a third class" << endl;
			break;
		case '1':
			cout << "You graduated with a PASS" << endl;
			break;
		}
		cout << "Do you want to do this again? (Y/N)" << endl;
		cin >> answer;
	}while(answer == 'Y' || answer == 'y');

	system("Pause");
	return 0;
}
