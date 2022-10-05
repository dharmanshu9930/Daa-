#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n-i+1)
        {
            cout<<j;
            j++;
        }

        int k=1;
        while (k<=(i-1)*2)
        {
            cout<<'*';
            k++;
        }

        j=n-i+1;

        while (j>=1)
        {
            cout<<j;
            j--;
        }

        cout<<endl;
        i++;
    }

    return 0;
}