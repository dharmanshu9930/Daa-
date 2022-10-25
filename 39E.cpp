//Find the middle number.
#include<iostream>
using namespace std;
int main(){

    float x, y, z;
    cout<<"Enter the value of x : "<<endl;
    cin>>x;

    cout<<"Enter the value of y : "<<endl;
    cin>>y;

    cout<<"Enter the value of z : "<<endl;
    cin>>z;

    if ((x>y && x<z)|| (x>z && x<y))
    {
        cout<<"The middle number is : "<<x<<endl;
    }

    else if ((y>z && y<x)|| (y>x && y<z))
    {
        cout<<"The middle number is : "<<y<<endl;
    }

    else
    {
        cout<<"The middle number is : "<<z<<endl;
    }

    return 0;
}