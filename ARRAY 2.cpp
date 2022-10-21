
#include<iostream>
using namespace std;
int main ()
{
    int  n, i, max, min;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the value of  elements : ";
     for (i = 0; i < n; i++)
    {cin >> arr[i];}
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout<<"the largest number="<<max;
    return 0;
}



