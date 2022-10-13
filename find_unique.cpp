#include <iostream>
using namespace std;
int main()
{
    int a[7] = {2, 6, 8, 5, 6, 2, 8};
    for (int i = 0; i < 7; i++)
    {
        int j;
        for (j = 0; j < 7; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                break;
            }
        }
            if (j == 7)
            {
                cout << "unique element: " << a[i] << endl;
            }
    }
    return 0;
}