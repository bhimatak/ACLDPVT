#include <iostream>

using namespace std;

int sum(int x, int y,float z, float w)
{
	return (x+y+z+w);
}

float sum(int x=100, int y=10, int z=20)
{
	//return (10.0+20.0+30.5);
	return ((float)x+(float)y+(float)z);
}

int main()
{
	float a=30.5;
	printf("\n%f",sum(10,20,a));
	//cout<<"Sum ="<<sum(10,20,a)<<endl;

	return 0;
}
