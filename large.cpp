#include<iostream>
using namespace std;
void large(int a,int b)
{
	if(a>b)
	   cout<<"a is greater";
	else
	   cout<<"b is greater";
	      
}
 
int main()
{
int x,y;
cout<<"Enter the value of x:";
cin>>x;	
cout<<"Enter the value of y:";
cin>>y;
large(x,y);
	
 } 
