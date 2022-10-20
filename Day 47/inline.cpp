#include <iostream>

using namespace std;


inline void ComputeVolume(float, float, float);

int main()
{
	//float le, br, wi;
	float SA;
	ComputeVolume(23.5, 45.35, 5.03);
	cout << "Surface Area is " << SA << endl;
	system("Pause");
	return 0;
}

void ComputeVolume(float l, float b, float w)
{
	float surfaceArea;
	surfaceArea = 2 * ((l*b)+(l*w)+(b*w));
	cout << surfaceArea;
}
