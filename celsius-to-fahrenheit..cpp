// Q9. Write a program to convert the temperature which is given in Celsius to Fahrenheit. 
// ° F = 9/5 ( ° C) + 32
#include <iostream>

using namespace std;

int main()
{
   int c;
   cout<<"temp in celsius : ";
   cin>>c;
   int f;
   cout<<"temp in Fahrenheit is : ";
   cout<<"f=" << ((9*c)/5)+32;
   
}
