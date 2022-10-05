
#include<iostream>
#include<string>
using namespace std;

int main(){
string name, address, Phone_number;

cout<<"Hello! What is your name?\n";
cin>>name;
cout<<"Thankyou for telling,"<<name;

cout<<"\nPlease tell your address,"<<name<<"\n";
cin>>address;
cout<<"\nThankyou for telling the address,"<<name;


cout<<"\nPlease tell your Phone Number,"<<name<<"\n";
cin>>Phone_number;
cout<<"\nThankyou for telling your Phone Number,"<<name;

cout<<"\nYour name is "<<name<<"."<<"\nYour address is "<<address<<"."<<"\nYour Phone number is "<<Phone_number<<".";
cout<<"\nTHankyou for telling all the details.";
    return 0;
}