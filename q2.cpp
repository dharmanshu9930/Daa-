#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,b,c,d;
    cout<<"Please enter co-ordinates of point A"<<endl;
cin>>a>>b;
    cout<<"Please enter co-ordinates of point B"<<endl;
cin>>c>>d;
int length=sqrt(pow((c-a),2)+pow((d-b),2)); 
cout<<"Distance between 2 points are: "<<length;
return 0;
}