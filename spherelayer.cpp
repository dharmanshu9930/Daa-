#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c,d,e,f,g,h;
	cout<<"Enter values of a,b,c,d,e,f,g,h\n";
	cin>>a>>b>>c>>d>>e>>f>>g>>h;
	float cs_x=-(e/2);
	float cs_y=-(f/2);
	float cs_z=-(g/2);
	float r= sqrt(pow(cs_x,2)+pow(cs_y,2)+pow(cs_z,2)-h);
	cout<<"\nThe value of radius of sphere is "<<r;
	float dis=((a*cs_x)+(b*cs_y)+(c*cs_z)+d)/(sqrt (a*a+b*b+c*c));
	cout<<"\nThe value of distance from plane is "<<d;
	float rc = sqrt(pow(r,2)-pow(d,2));
	float area= 3.14*pow(rc,2);
	cout<<"\nThe area of the circle is "<<area;
	return 0; 
}
