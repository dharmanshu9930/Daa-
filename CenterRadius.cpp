#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,radius;
    cout<<"Enter Values of a,b,c to find centre and radius of the Circle ";
    cin>>a>>b>>c;
    radius = sqrt(pow((-a/2),2)+pow((-b/2),2)-c);
    cout<<"Centre = "<<"("<<(-a/2)<<","<<(-b/2)<<")\n";
    cout<<"radius = "<<radius;
    return 0;
}