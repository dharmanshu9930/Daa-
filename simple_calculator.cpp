#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void sum(){
    int x, y, z;
    cout << "Enter your first number: ";
    cin >> x;
    cout << "Enter your second number: ";
    cin >> y;
    z = x + y;
    cout << "Your number is " << z << endl<<endl;   
}

void diff(){
    int x, y, z;
    cout << "Enter your first number: ";
    cin >> x;
    cout << "Enter your second number: ";
    cin >> y;
    z = x - y;
    cout << "Your number is " << z << endl<<endl;
}
void mult(){
    int x,y,z;
    cout << "Enter your first number: ";
    cin >> x;
    cout << "Enter your second number: ";
    cin >> y;
    z = x * y;
    cout << "Your number is " << z << endl<<endl;
}
void divi(){
    int x,y,z;
    cout << "Enter your first number: ";
    cin >> x;
    cout << "Enter your second number: ";
    cin >> y;
    z = x / y;
    cout << "Your number is " << z << endl<<endl;
}

int main()
{
    int inp;
    while (true)
    {
        cout << "\n1.Sum\n2.Diff\n3.Multiply\n4.Division\n\n";
        cout << "Enter your choice: ";
        cin >> inp;
        if (inp == 1)
        {
            char choic;
            sum();
            cout << "Do you want to do more operations (Y/N): ";
            cin >> choic;
            choic = toupper(choic);
            if (choic == 'N')
            {
                break;
            }
        }
        else if (inp == 2)
        {
            char choic;
            diff();
            cout << "Do you want to do more operations (Y/N): ";
            cin >> choic;
            choic = toupper(choic);
            if (choic == 'N')
            {
                break;
            }
        }
        else if (inp == 3)
        {
            char choic;
            mult();
            cout << "Do you want to do more operations (Y/N): ";
            cin >> choic;
            choic = toupper(choic);
            if (choic == 'N')
            {
                break;
            }
        }
        else if (inp == 4)
        {
            char choic;
            divi();
            cout << "Do you want to do more operations (Y/N): ";
            cin >> choic;
            choic = toupper(choic);
            if (choic == 'N')
            {
                break;
            }
        }
        else
        {
            cout << inp << " choice is not available";
        }
    }
    return 0;
}