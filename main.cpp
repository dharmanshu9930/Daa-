/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++) // divide the triangles according to your convenience and then try to see first digit of all is variables or not and then write intialization expression
        {
            cout<<k;
        }
        for(l=i-1;l>=1;l--)// see variables and according to that change the intialisation statement
        {
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}