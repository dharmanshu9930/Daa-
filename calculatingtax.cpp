#include <iostream>
#include <cmath>
using namespace std;

int taxCalculator(double tax, double savings, double salary)
{
    if(salary<=500000)
    {
        tax=tax+(20*salary)/100.0;
        cout<<"Tax is:"<<tax<<endl;
    }
	else if(salary<=200000)
    {
        tax=(10*salary)/100.0;
        cout<<"Tax is:"<<tax<<endl;
    }
    else if(salary<=500000)
    {
        tax=tax+(20*salary)/100.0;
        cout<<"Tax is:"<<tax<<endl;
    }
    else if(salary<=100000)
    {
        tax=0;
        cout<<"Tax is:"<<tax<<endl;
    }
    else
    {
        tax=tax+(30*salary)/100.0;
        cout<<"Tax is:"<<tax<<endl;
    }
    savings=salary-tax;
    cout<<"Savings is:"<<savings<<endl;
    return 0;
}
int main()
{
    double tax,salary,savings;
    cout<<"Enter salary:"<<endl;
    cin>>salary;
    taxCalculator(tax,savings,salary);
}

