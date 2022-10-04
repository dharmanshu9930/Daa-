#include <iostream>
using namespace std;
int main()
{
    int n, r, d, sum=0;
    cout<<"Enter the number:";
    cin>>n;
    d= n;
    while(n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if(d== sum)
    {
        cout<<"Number is Armstrong";
    }
    else
    {
        cout<<"Number is not Armstrong";
    }
    return 0;
}