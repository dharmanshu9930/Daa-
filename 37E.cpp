//Switch Statement (Simple Calculator using switch statement)
#include<iostream>
using namespace std;
int main(){

    int a, b, c;
    cout<<"Enter the first number : "<<endl;
    cin>>a;

    cout<<"Enter the second number : "<<endl;
    cin>>b;

    cout<<"Enter your choice : "<<endl;
    cin>>c;

    switch (c)
    {
    case 1 :
        cout<<"Sum : "<<(a+b)<<endl;
        break;
    case 2 :
        cout<<"Difference : "<<(a-b)<<endl;
        break;
    case 3 :
        cout<<"Product : "<<(a*b)<<endl;
        break;
    case 4 :
        cout<<"Quotient : "<<(a/b)<<endl;
        break;
    
    default:
        cout<<"Choose the correct options"<<endl;
        break;
    }


    return 0;
}