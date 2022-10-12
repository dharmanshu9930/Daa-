// Write program, which reads three numbers and prints the biggest number

#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter the number a:";
    cin>>a;
    cout<<"Enter the number b:";
    cin>>b;
    cout<<"Enter the number c:";
    cin>>c;
    if(a>=b && a>=c)
    {
        cout<< a <<"is the greatest number"<<endl;
    }
    else if(b>=a && b>=c)
    {
        cout<< b <<"is the greatest number"<<endl;
    }
    else
    {
        cout<< c <<"is the greatest number"<<endl;
    }
    return 0;
}