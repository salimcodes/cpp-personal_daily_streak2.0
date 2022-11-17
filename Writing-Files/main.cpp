#include <iostream> 
#include <fstream>
using namespace std;

int main()
{
	ofstream file;
	file.open("newfile.txt");
	file << "My name is Salim Oyinlola" << endl;
	file.close();

	system("Pause");
	return 0;
}
