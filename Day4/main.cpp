#include <iostream>
using namespace std;

/*
The volume, V, and surface area, A, of a sphere of radius r are given respectively, by the expression

Write a complete C++ program, with class Sphere containing private and public members, that asks the
user to enter the radius of a sphere, calculates the volume and the area of the sphere, and prints the
results (to two decimal places) as well as all associated dimensional information. 
*/
class Sphere
{
	public:
		float radius;
		float surface_area;
		float volume;
};

int main()
{
	float pi = 3.142857142857143;
	
	Sphere sphere1;
	cout << "Input the radius: " << endl;
	cin >> sphere1.radius;

	sphere1.surface_area = 4 * pi * (sphere1.radius) * (sphere1.radius);
	cout << "The surface area is given as: " << sphere1.surface_area << "squared-unit." << endl;
	sphere1.volume = (4 * pi * (sphere1.radius) * (sphere1.radius) * (sphere1.radius))/3;
	cout << "The volume is given as: " << sphere1.volume << "cubic-unit." << endl;
	system("Pause");
}