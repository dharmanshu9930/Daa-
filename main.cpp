#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter the sides of triangle : ";
    cin>>a>>b>>c;
    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of triangle is : "<<area;
    return 0;
}