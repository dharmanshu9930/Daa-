#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,e,f,g,h,p,R,area,num,deno;
    cout<<" Enter Values to find area of Circle of Intersection ";
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    R=sqrt(pow((-e/2),2)+pow((-f/2),2)+pow((-g/2),2)-h);
    num=((a*(-e/2))+(b*(-f/2))+(c*(-g/2))-d);
    deno=sqrt(pow(a,2)+pow(b,2)+pow(c,2));
    p=num/deno;
    int r=sqrt(pow(R,2)-pow(p,2));
    cout<<r;
    area=3.14*pow(r,2);
    cout<<"The Area of intersecting Circle is = "<<area;
    return 0;


}