#include <iostream>
using namespace std;

int main()
{
    int a[100], n;

    cout << "Enter the size of the array : ";
    cin >> n;

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int before;

    for (int i = 0; i < n; i++)
    {
        before = a[i];
        int j = i - 1;

        for (j; j >= 0; j--)
        {
            if (a[j] > before)
            {
                a[j + 1] = a[j];

            }
            else
            {
                break;
            }
        }

        a[j + 1] = before;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;

    return 0;
}