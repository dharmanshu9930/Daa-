#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter the values (Exactly 2 values need to be same) a b c\n";
	cin>>a>>b>>c;
	if (a==b&& b==c&& c==a)
	{
		cout<<"output = Error";
	}
	else if (b==c)
	{
		cout<<"output = "<<a;
	}
	else if (a!=b&&b!=c &&c!=a)
	{
		cout<<"output = Error";
	}
	else if (a==b)
	{
		cout<<"Output = "<<c;
	}
	else
	{
		cout<<"output = "<<b;
	}
	return 0;
}
