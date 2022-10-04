#include <iostream>

using namespace std;

int main()
{
    int a = 6, b = 3;
    cout<<"operators in c++:"<<endl;//we can use '\n' in place of 'endl'
    cout<<"following are the types of operators in c++:"<<endl; 
    //arithmetic operators
    cout<<"the value of a + b is "<<a + b<<endl;
    cout<<"the value of a - b is "<<a - b<<endl; 
    cout<<"the value of a * b is "<<a * b<<endl;
    cout<<"the value of a / b is "<<a / b<<endl;
    cout<<"the value of a % b is "<<a % b<<endl;
    cout<<"the value of a++ is "<<a++<<endl;//yaha a print hoga '6' phirr uski value badhegi (6+1)=7
    cout<<"the value of a-- is "<<a--<<endl;//yaha a print hoga '7' phir uski value khategi (7-1)=6
    cout<<"the value of ++a is "<<++a<<endl;//yaha a ki value badhegi then print hogi(6+1)='7'
    cout<<"the value of --a is "<<--a<<endl;//yaha a ki value khategi then print hogi(7-1)='6'
    
    //assignment operator-> used to assign values to variables
    /* example:int a = 8, b = 9;
    char d = 'c'*/
    
    //comparison operators
    cout<<"\n";
    cout<<"following are the types of comparison operators in c++:"<<endl; 
    cout<<"the value of a == b is "<<(a == b)<<endl;//6  equal to 3 is false
    cout<<"the value of a != b is "<<(a != b)<<endl;//6  not equal to 3 is true
    cout<<"the value of a < b is "<<(a < b)<<endl;//6 less than 3 is false
    cout<<"the value of a > b is "<<(a > b)<<endl;//6 greater than 3 is true
    cout<<"the value of a <= b is "<<(a <= b)<<endl;//6 is less than or equal to 3 is false
    cout<<"the value of a >= b is "<<(a >= b)<<endl;//6 is greater than or equal to 3 is true since 6>3
    //here '0=false' & '1=true'
    
        
    //logical operators
    cout<<"\n";
    cout<<"following are the types of logical operators in c++:"<<endl; 
    cout<<"the value of logical and operator ((a == b) && (a>b))  is "<<((a == b) && (a>b))<<endl;
    /*here both condition must satisfy,nor 6 is equal to 3 and neither 6 is less than 3*/
    cout<<"the value of logical or operator ((a == b) || (a>b))  is "<<((a == b) || (a>b))<<endl;
    //yaha koi ek condition satisfy honi chahiye,"||" is or operator
    cout<<"the value of logical not operator (!(a == b))  is "<<(!(a == b))<<endl;
    // yaha jo answer aayega uspe opposite answer print hoga ,like agar 0 aa rha h toh ! ki wajah se 1 print hoga
    return 0;
}