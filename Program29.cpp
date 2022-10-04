//to print armstrong number which states
//153 = 1^3+5^3+3^3 = 153
//12345 = 1^5+2^5+...+5^5
#include <iostream>
using namespace std;
int main()
{
    int n,temp,r,sum = 0;
    cout<<"enter the number : ";
    cin>>n;
    temp = n;
    while(n>0)
    {
      r = n%10;
      sum = sum + (r*r*r);
      n = n/10;
    }
    if(temp == sum)
    {
        cout<<"it is an armstrong number";
    }
    else
    {
        cout<<"it is not an armstrong number";
    }
    return 0;
    }