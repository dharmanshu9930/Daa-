#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    cout<<endl;

    int n=1;
    int x=0;
    int largest=INT_MIN;
    int secondlargest=INT_MIN;
    
    while (n<=N)
    {
        cin>>x;

        if (x>largest)
        {
            secondlargest=largest;
            largest=x;
            
        }

        if (secondlargest<x && x<largest)
        {
            secondlargest=x;
        }
        n++;
    }

    cout<<secondlargest;

    return 0;
}