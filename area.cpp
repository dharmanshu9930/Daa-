//write program to find the area of cricle, rectangle and triangle using function overloading
#include<iostream>
int main()
{
	int s,l,b;
	float r,bs,ht;
	cout<<"Enter side of a square:";
	cin>>s;
	cout<<"Enter length and breadth of a rectangle:";
	cin>>l>>b;
	cout<<"Enter Radius of circle:";
	cin>>r;
	cout<<"Enter base and heigth of triangle:";
	cin>>bs>>ht;
	cout<<"Area of square is:"<<area(s);
	cout<<"\nArea of rectangle is:"<<area(l,b);
	cout<<"\nArea of cricle is:"<<area(r);
	cout<<"\nArea of triangle is:"<<area(bs,ht);
	}
	int area(int s)
	{
		return(s*s);
	}e<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
	int area(int l,int b)
	{
		return(l*b);
	}
	float area(float r)
	{
		return(3.14*r*r);
	}
	float area(float bs,float ht)
	{
		return((bs*ht)/2);
	}
