#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float p,q,r,a,b,c;
	cout<<"Enter the values p q r a b c\n";
	cin>>p>>q>>r>>a>>b>>c;
	float r1=(a*p+b*q+c)/(pow((a*a+b*b),0.5));
	float cl=2*(sqrt((r*r-r1*r1)));
	float Area=(r1)*(sqrt(r*r-r1*r1));
	if (r1>r)
	{
		cout<<"No points of intersection";
	}
	else if (r1=r)
	{
		cout<<"One point of intersection, distance of line from centre ="<<r1;
	}
	else 
	{
		cout<<"Two points of intersection, chord length ="<<cl<<','<<"Area of triangle is ="<<Area;
	}
	return 0;
}
