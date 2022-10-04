#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    if (a > b)
    {
        cout << "Bigger number is: " << a;
    }
    else
    {
        cout << "Bigger number is: " << b;
    }
    return 0;
}