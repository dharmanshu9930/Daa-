#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,reversednum=0,remainder;
    cout<<"enter the number to be reversed :";
    cin>>n;
    while(n!=0){
        remainder=n%10;
        reversednum = reversednum*10 + remainder;
        n=n/10;

    }
    cout<<"reversed number is: "<<reversednum;
    

    return 0;

}