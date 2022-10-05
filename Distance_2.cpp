#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,e,dis;
    cout<<" Input a,b,c,d,e to find distance between point (a,b) and line cx+dy+e = 0";
    cin>>a>>b>>c>>d>>e;
    float absolute=abs((a*c)+(b*d)+e);
    float deno=sqrt(pow(c,2)+pow(d,2));
    dis=absolute/deno;
    cout<<" the distance between line and the point is "<<dis;
    return 0;
}