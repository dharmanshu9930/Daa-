#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter the values a b c\n";
	cin>>a>>b>>c;
	if (a==b)
	{
		cout<<"output = "<<c;
	}
	else if (b==c)
	{
		cout<<"output = "<<a;
	}
	else if (a!=b!=c)
	{
		cout<<"output = "<<'---';
	}
	else
	{
		cout<<"output = "<<b;
	}
	return 0;
}
