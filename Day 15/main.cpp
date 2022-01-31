#include <iostream>

using namespace std;


void GetTwoNumbers(float*, float*);


int main()
{
	cout << "My name is Salim." << endl;
	float Radius, Height;
	GetTwoNumbers(&Radius, &Height);

	float volume;
	volume = Radius * Height;
	cout << "The volume is: " << volume << endl;
	system("Pause");
}

void GetTwoNumbers(float *a_ptr, float *b_ptr)
{
	float letter_a, letter_b;
	cout << "Enter the first number: " << endl;
	cin >> letter_a;
	cout << "Enter the second number: " << endl;
	cin >> letter_b;

	*a_ptr = letter_a;
	*b_ptr = letter_b;
}
