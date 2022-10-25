//wap to find the area of circle ,rectangle and triangle using function overloading
#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float , float);
int main()
{
    int s,l,b;
    float r,bs,ht;
    cout<<"enter the side of square:  ";
    cin>>s;
    cout<<"enter the length and breadth of rectangle :  ";
    cin>>l>>b;
    cout<<"enter the radius of circle:   ";
    cin>>r;
    cout<<"enter the base and height of the triangle:  ";
    cin>>bs>>ht;
    cout<<"\n the area of square is :  "<<area(s);
    cout<<"\n the area of rectangle :  "<<area(l,b);
    cout<<"\n the area of circle :   "<<area(r);
    cout<<"\n the area of triangle :  "<<area(bs,ht);
}
int area(int s){
    return(s*s);

}
    int area(int l ,int b)
    {return(l*b);
    }
    float area(float r)
    {
        return(3.14*r*r);
    }
    float area(float bs,float ht)
    {
        return((bs*ht)/2);
    }    



