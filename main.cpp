/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter year: ";
    cin>>a;
    if (a%4==0 && a%100!=0 || a%400==0)
        { cout<<"Leap year";
        }
    else 
    {
        cout<<"Not a leap year";
    }

    return 0;
}

