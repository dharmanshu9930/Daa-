#include<iostream>
using namespace std;
void rev(int);
int main()
{
    int n;
    cout<<"Enter any number :";
    cin>>n;
    rev(n);
}
void rev(int n)
{
    int n1,d,rn=0,t;
    t=n;
    while(n>0)
    {
        d=n%10;
        rn=(rn*10)+d;
        n=n/10;
    }  
    if(t==rn)
    cout<<"\n The number["<<t<<"] is a Palindrome no \n";
    else 
    cout<<"\n The number["<<t<<"] is NOT a Palindrome  no. \n";
}