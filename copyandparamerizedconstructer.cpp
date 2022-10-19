#include <iostream>
using namespace std;
class A
{
    int d1;

public:
    void fill(int i) { d1 = i; }
    void show() { cout << "\nd1=" << d1; }
};
void f1(int i) { cout << "\nf1()=" << i; }
 main()
{
    A ob1;
    ob1.fill(54);
    // A ob2 = ob1;                  //Either 
    A ob2(ob1);                      //Or          //copy constructor called
    ob1.show();
    ob2.show();
    f1(43);
    // return 0;
}