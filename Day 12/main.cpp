#include <iostream>

using namespace std;

//Using String-copy (strcpy)
struct House
{
	char location[50];
	char street_name[50];
	int number_of_bedroom;
	int house_number;
	float square_feet;
}my_house;
int main()
{
	strcpy(my_house.location,"Ikeja GRA");
	strcpy(my_house.street_name, "Oyinlola Drive");
	my_house.number_of_bedroom = 5;
	my_house.house_number = 1;
	my_house.square_feet = 783.26;

	system("Pause");
}