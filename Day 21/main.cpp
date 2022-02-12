#include <iostream>

struct Last_Game
{
	int gs;
	int ga;
};
struct Team
{
	char Coach[50];
	char Best_player[50];
	int number_of_ucl;
	Last_Game result;
}Man_United;
using namespace std;
int main()
{
	//cout << "My name is Salim O. Oyinlola" << endl;

	cout << "Enter the name of the coach: " << endl;
	cin.getline(Man_United.Coach, 50);
	cout << "Enter the name of the best player: " << endl;
	cin.getline(Man_United.Best_player, 50);
	//cin.ignore();
	cout << "Enter the number of UEFA Champions League trophies the team has won: " << endl;
	cin >> Man_United.number_of_ucl;
	cout << "Enter the number of goals scored in the last game: " << endl;
	cin >> Man_United.result.gs;
	cout << "Enter the number of goals conceded in the last game: " << endl;
	cin >> Man_United.result.ga;

	system("Pause");
}
