#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,x;
	cout<<"Enter the values a b c d x \n";
	cin>>a>>b>>c>>d>>x;
	if (x==a&& x==b&& x==c&& x==d)
	{
		cout<<"The output is 4";
	}
	else if (x==a&& x==b&& x==c||x==b&& x==c&& x==d||x==d&& x==a&& x==b||x==c&& x==d&& x==a)
	{
		cout<<"The output is 3";
	}
	else if ((x==a)&&(x==b)||(x==b)&&(x==c)||(x==c)&& (x==d)||(x==d)&& (x==a))
	{
		cout<<"The output is 2";
	}
	else if (x==a||x==b||x==c||x==d)
	{
		cout<<"The output is 1";
	}
	return 0;
}
