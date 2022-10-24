#include <iostream>
using namespace std;
//Ugh! Going back to school today.

float ComputeVolume(float height, float radius);

int main()
{
	float areaa;
	areaa = ComputeVolume(4.5, 7);
	cout << "the area is given as " << areaa << endl;
	system("Pause");
	return 0;
}
float ComputeVolume(float height, float radius)
{
	float area;
	area = 3.14 * height * radius * radius;
	return area;
}
