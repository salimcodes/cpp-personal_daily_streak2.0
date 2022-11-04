#include <iostream>
using namespace std;

/*
Write a program that sets up a Date structure (integer for month, day and year) and a 
Person structure (name and birthday – using the Date struct). The program should have a 
function (FillPerson) that asks the user to enter all the names and birthday information. The 
prototype for this function is:
Person FillPerson();
You should also have a function called WritePerson that writes out all the person 
information using the name of the month (as opposed to the integer value) for the birthday 
month. The prototype for this function is:
void WritePerson(Person);
your program should have two Person variables. It should fill these two variables and then 
call a function called WhoIsOlder, which is sent both Person variables. The function 
determines who is older and writes the age status to the screen. (Note: WhoIsOlder should 
call WritePerson twice.
*/

struct Date
{
	int month;
	int day;
	int year;
};

struct Person
{
	char name[50];
	Date birthday;
};

Person FillPerson();
void WritePerson(Person);
Person WhoIsOlder(Person, Person);
int main()
{
	Person UserA, UserB;
	UserA = FillPerson();
	UserB = FillPerson();
	//WritePerson(UserA);
	//WritePerson(UserB);
	Person UserC;
	UserC = WhoIsOlder(UserA, UserB);
	system("Pause");
	return 0;
}

Person FillPerson()
{
	Person yourself;
	cout << "Enter your name: " << endl;
	cin.getline(yourself.name, 50);
	cout << "Enter your year of birth: " << endl;
	cin >> yourself.birthday.year;
	cin.ignore();
	cout << "Enter your month of birth (where 1 is January, 2 is February and 12 is December: " << endl;
	cin >> yourself.birthday.month;
	cin.ignore();
	cout << "Enter the day of the month you were born: " << endl;
	cin >> yourself.birthday.day;
	cin.ignore();
	return yourself;
}

/*
void WritePerson(Person)
{
	Person yourself2;
	if(yourself2.birthday.day == 1)
	{
		cout << "Your name is " << yourself2.name << " and your date of birth is " << yourself2.birthday.day << " January, " << yourself2.birthday.year << endl;
	}
	else if(yourself2.birthday.day == 2)
	{
		cout << "Your name is " << yourself2.name << " and your date of birth is " << yourself2.birthday.day << " February, " << yourself2.birthday.year << endl;
	}
	else if(yourself2.birthday.day == 3)
	{
		cout << "Your name is " << yourself2.name << " and your date of birth is " << yourself2.birthday.day << " March, " << yourself2.birthday.year << endl;
	}
	else if(yourself2.birthday.day == 4)
	{
		cout << "Your name is " << yourself2.name << " and your date of birth is " << yourself2.birthday.day << " April, " << yourself2.birthday.year << endl;
	}
	else if(yourself2.birthday.day == 5)
	{
		cout << "Your name is " << yourself2.name << " and your date of birth is " << yourself2.birthday.day << " May, " << yourself2.birthday.year << endl;
	}
	else if(yourself2.birthday.day == 6)
	{
		cout << "Your name is " << yourself2.name << " and your date of birth is " << yourself2.birthday.day << " June, " << yourself2.birthday.year << endl;
	}
	else if(yourself2.birthday.day == 7)
	{
		cout << "Your name is " << yourself2.name << " and your date of birth is " << yourself2.birthday.day << " July, " << yourself2.birthday.year << endl;
	}
	else if(yourself2.birthday.day == 8)
	{
		cout << "Your name is " << yourself2.name << " and your date of birth is " << yourself2.birthday.day << " August, " << yourself2.birthday.year << endl;
	}
	else if(yourself2.birthday.day == 9)
	{
		cout << "Your name is " << yourself2.name << " and your date of birth is " << yourself2.birthday.day << " September, " << yourself2.birthday.year << endl;
	}
	else if(yourself2.birthday.day == 10)
	{
		cout << "Your name is " << yourself2.name << " and your date of birth is " << yourself2.birthday.day << " October, " << yourself2.birthday.year << endl;
	}
	else if(yourself2.birthday.day == 11)
	{
		cout << "Your name is " << yourself2.name << " and your date of birth is " << yourself2.birthday.day << " November, " << yourself2.birthday.year << endl;
	}
	else if(yourself2.birthday.day == 12)
	{
		cout << "Your name is " << yourself2.name << " and your date of birth is " << yourself2.birthday.day << " December, " << yourself2.birthday.year << endl;
	}
	else
		cout << "You did not enter a month between 1 - 12 (i.e. January and December)" << endl;
}
*/
Person WhoIsOlder(Person, Person)
{
	Person personA;
	Person personB;
	if(personA.birthday.year > personB.birthday.year)
	{
		return personA;
	}
	else if(personA.birthday.year == personB.birthday.year && personA.birthday.month > personA.birthday.month)
	{
		return personA;
	}
	else if(personA.birthday.year == personB.birthday.year && personA.birthday.month == personB.birthday.month && personA.birthday.day > personB.birthday.day)
	{
		return personA;
	}
	else
		return personB;
}
