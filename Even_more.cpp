#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<list>
#include<cctype>
#include<map>
using namespace std;
 
// cube root program //


// int main(){
//     while (true){
//         char choic;
//         double num,sq_rt;
//         cout <<"Please Enter your number: ";
//         cin>>num;
//         sq_rt=cbrt(num);
//         cout <<"cube root of "<<num<<" is "<<sq_rt<<endl;
//         cout << "Do you want to do more operations (Y/N): ";
//         cin >> choic;
//         choic = toupper(choic);
//         if (choic == 'N')
//         {
//             cout<<"\nOkay have a nice day :)";
//             break;
//         }
//         else {
//             continue;
//         }
//     }
//     return 0;
// }

// end cube root programs//

//odd even program//

// void odd_even(int x)
// {
//     if (x % 2 == 0)
//     {
//         cout << x << " is an even number"<<endl<<endl;
//     }
//     else
//     {
//         cout << x << " is an odd number"<<endl<<endl;
//     }
// }

// int main(){
//     while (true){
//         char choic;
//         int num;
//         cout <<"Please Enter your number: ";
//         cin>>num;
//         odd_even(num);
//         cout << "Do you want to do more operations (Y/N): ";
//         cin >> choic;
//         choic = toupper(choic);
//         if (choic == 'N')
//         {
//             cout<<"\nOkay have a nice day :)";
//             break;
//         }
//         else {
//             continue;
//         }
//     }
//     return 0;

// }

// end Odd even Program// 

// Square root Program//


// int main(){
//     while (true){
//         char choic;
//         double num,sq_rt;
//         cout <<"Please Enter your number: ";
//         cin>>num;
//         sq_rt=sqrt(num);
//         cout <<"square root of "<<num<<" is "<<sq_rt<<endl;
//         cout << "Do you want to do more operations (Y/N): ";
//         cin >> choic;
//         choic = toupper(choic);
//         if (choic == 'N')
//         {
//             cout<<"\nOkay have a nice day :)";
//             break;
//         }
//         else {
//             continue;
//         }
//     }
//     return 0;
// }

// end square root progarm //

// Swaping program //


// void swap_var(int x,int y){
//     int l,n;
//     cout <<"Current first num "<<x<<"   ";
//     cout<<"Current second num "<<y<<endl;
//     l=x;
//     n=y;
//     y=l;
//     x=n;
//     cout <<"After swap first num "<<x<<"    ";
//     cout<<"After swap second num "<<y<<endl;
// }


// int main(){
//     while (true){
//         char choic;
//         double num_1,num_2,sq_rt;
//         cout <<"Please Enter your first number: ";
//         cin>>num_1;
//         cout <<"Please Enter your second number: ";
//         cin>>num_2;
//         swap_var(num_1,num_2);
//         cout << "Do you want to do more operations (Y/N): ";
//         cin >> choic;
//         choic = toupper(choic);
//         if (choic == 'N')
//         {
//             cout<<"\nOkay have a nice day :)";
//             break;
//         }
//         else {
//             continue;
//         }
//     }
//     return 0;
// }

// end Swap Program//

//(a+b)^2 formula

// int main(){
//     double a,b,result;
//     cout <<"Program for (a+b)^2 formula"<<endl;
//     cout <<"Enter your first number: ";
//     cin>>a;
//     cout <<"Enter your second number: ";
//     cin>>b;
//     result=pow(a,2)+pow(b,2)+2*a*b;
//     cout <<result;
//     return 0;
// }

//name,address, phonenumber

// int main(){
//     string name,address;
//     long long int phone_number;
//     cout<<"Enter your name here: ";
//     getline(cin,name);
//     cout<<"Enter your address here: ";
//     getline(cin,address);
//     cout<<"Enter your phone number here: ";
//     cin>>phone_number;
//     cout<<"\n";
//     cout <<"Your name is: "<<name<<endl;
//     cout<<"Your address is: "<<address<<endl;
//     cout<<"Your phone number is: "<<phone_number<<endl;
// }

// int main(){
//     int intNumber=30;
//     float floatNumber=30.78;
//     double doubleNumber=45.1234;
//     bool boolean=true;
//     char charName='u';
//     cout<<intNumber<<endl;
//     cout<<floatNumber<<endl;
//     cout<<doubleNumber<<endl;
//     cout<<boolean<<endl;
//     cout<<charName<<endl;
//     return 0;
// }

// Assignment 2 starts here.

// Triangle program
// int main(){
//     float a,b,c,s,result;
//     cout <<"Enter your first side: ";
//     cin>>a;
//     cout <<"Enter your second side: ";
//     cin>>b;
//     cout <<"Enter your third side: ";
//     cin>>c;
//     s=(a+b+c)/2;
//     result=(sqrt(s*(s-a)*(s-b)*(s-c)));
//     cout<<"area of this triangle is: "<<result;

//     return 0;
// }

// dist between coordinates (2)
// int main(){
//     float a,b,c,d,result;
//     cout <<"Enter your first coordinate: ";
//     cin>>a;
//     cout <<"Enter your second coordinate: ";
//     cin>>b;
//     cout <<"Enter your third coordinate: ";
//     cin>>c;
//     cout <<"Enter your fourth coordinate: ";
//     cin>>d;
//     result=sqrt(pow((c-a),2)+pow((d-b),2));
//     cout<<"Distance between these points is : "<<result;
//     return 0;
// }

// (3) output of area of triangles with coordinates
// int main(){
//     float a,b,c,d,e,f,side_1,side_2,side_3,result,s;
//     cout <<"Enter your first coordinate: ";
//     cin>>a;
//     cout <<"Enter your second coordinate: ";
//     cin>>b;
//     cout <<"Enter your third coordinate: ";
//     cin>>c;
//     cout <<"Enter your fourth coordinate: ";
//     cin>>d;
//     cout <<"Enter your fifth coordinate: ";
//     cin>>e;
//     cout <<"Enter your sixth coordinate: ";
//     cin>>f;
//     side_1=sqrt(pow((c-a),2)+pow((d-b),2));
//     side_2=sqrt(pow((e-a),2)+pow((f-b),2));
//     side_3=sqrt(pow((e-c),2)+pow((f-d),2));
//     s=(side_1+side_2+side_3)/2;
//     result=(sqrt(s*(s-side_1)*(s-side_2)*(s-side_3)));
//     cout<<"area of this triangle is: "<<result;
//     return 0;
// }

//(4) slope of a normal line

// int main(){
//     float a,b,c,result;
//     cout <<"Enter your first num: ";
//     cin>>a;
//     cout <<"Enter your second num: ";
//     cin>>b;
//     cout <<"Enter your third num: ";
//     cin>>c;
//     result=-(a/b);
//     cout<<"slope of these points is : "<<result;
//     return 0;
// }

// (5) dist between line cx+dy+e=0 and point a,b

// int main(){
//     float a,b,c,d,e,result;
//     cout <<"Enter your first coordinate: ";
//     cin>>a;
//     cout <<"Enter your second coordinate: ";
//     cin>>b;
//     cout <<"Enter your third coordinate: ";
//     cin>>c;
//     cout <<"Enter your fourth coordinate: ";
//     cin>>d;
//     cout <<"Enter your fifth coordinate: ";
//     cin>>e;
//     result=fabs(c*a+d*b+e)/sqrt(pow(c,2)+pow(d,2));
//     cout<<"Distance between this line and point is "<<result;
//     return 0;

// }

// centre and radius of a circle

// int main(){
//     float a,b,c,d,e,centre,radius;
//     cout <<"Enter your first num: ";
//     cin>>a;
//     cout <<"Enter your second num: ";
//     cin>>b;
//     cout <<"Enter your third num: ";
//     cin>>c;
//     cout<<"Centre is ("<<a/2<<","<<b/2<<")"<<endl;
//     radius=sqrt(pow(a/2,2)+pow(b/2,2)-c);
//     cout <<"Radius is "<<radius;
//     return 0;
// }

// Program for intersection lines points
 
// int main(){
//     float a,b,c,p,q,r,x,y;
//     cout <<"Enter your first num: ";
//     cin>>a;
//     cout <<"Enter your second num: ";
//     cin>>b;
//     cout <<"Enter your third num: ";
//     cin>>c;
//     cout <<"Enter your fourth num: ";
//     cin>>p;
//     cout <<"Enter your fifth num: ";
//     cin>>q;
//     cout <<"Enter your sixth num: ";
//     cin>>r;
//     x=(b*r-q*c)/(a*q-p*b);
//     y=(p*c-a*r)/(a*q-p*b);
//     cout <<"Coordinates of intersection are ("<<x<<","<<y<<")"<<endl;
//     return 0;
// }

// program for angle of triangle

//(8)
// int main(){
//     double a,b,c,angle;
//     cout <<"Enter your first side: ";
//     cin>>a;
//     cout <<"Enter your second side: ";
//     cin>>b;
//     cout <<"Enter your third side: ";
//     cin>>c;
//     angle=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
//     cout<<"Angle of this triangle in radian is "<<angle<<endl;
//     cout<<"Angle of this triangle in degree is "<<floor(angle*180/3.14)<<endl;
//     return 0;
// }

// Hardest program yet question 9

// int main(){
//     float a,b,c,d,e,f,g,h,rad,cent_x,cent_y,cent_z,cent_plane_dis,circl_rad,circl_area;
//     cout<<"Enter for plane ax+by+cz+d=0"<<endl;
//     cout <<"Enter your a: ";
//     cin>>a;
//     cout <<"Enter your b: ";
//     cin>>b;
//     cout <<"Enter your c: ";
//     cin>>c;
//     cout <<"Enter your d: ";
//     cin>>d;
//     cout<<"Enter for Sphere x^2+y^2+z^2+ex+fy+gz+h=0"<<endl;
//     cout <<"Enter your e: ";
//     cin>>e;
//     cout <<"Enter your f: ";
//     cin>>f;
//     cout <<"Enter your g: ";
//     cin>>g;
//     cout <<"Enter your h: ";
//     cin>>h;    
//     rad=sqrt(-h+pow((e/2),2)+pow((f/2),2)+pow((g/2),2));
//     cent_x=-e/2;
//     cent_y=-f/2;
//     cent_z=-g/2;
//     cent_plane_dis=fabs(a*cent_x+b*cent_y+c*cent_z+d)/sqrt(pow(a,2)+pow(b,2)+pow(c,2));
//     circl_rad=sqrt(pow(rad,2)-pow(cent_plane_dis,2));
//     circl_area=3.14*pow(circl_rad,2);
//     cout<<circl_area;
//     //centre of points is also e/2 and f/2 and g/2
//     return 0;
// }

// int main(){
//     float h,k,r,s,cent_pt,chord_len;
//     cout <<"Enter your x coordinate for circle: ";
//     cin>>h;
//     cout <<"Enter your y coordinate for circle: ";
//     cin>>k;
//     cout <<"Enter radius: ";
//     cin>>r;
//     cout <<"Enter your x for line: ";
//     cin>>s;
//     //cent_pt=sqrt(pow((s-h),2)+pow(k,2));
//     cent_pt=s-h;
//     chord_len=2*sqrt(pow(r,2)-pow(cent_pt,2));
//     cout<<chord_len;
    
//     return 0;
// }

// Assignment 3 Starts here
//question 1

//  int main(){
//     int a,b,c;
//     cout<<"Enter Your first num: ";
//     cin>>a;
//     cout<<"Enter your sec num: ";
//     cin>>b;
//     cout<<"Enter your third num: ";
//     cin>>c;
//     cout<<"Maximum number is "<<max({a,b,c});
    
//     return 0;
//  }

//question 2 
//  int main(){
//     int a,b,c,d;
//     cout<<"Enter Your first num: ";
//     cin>>a;
//     cout<<"Enter your sec num: ";
//     cin>>b;
//     cout<<"Enter your third num: ";
//     cin>>c;
//     cout<<"Enter your fourth num: ";
//     cin>>d;
//     cout<<"Maximum number is "<<max({a,b,c,d});
    
//     return 0;
//  }

//question 3
//  int main(){
//     int a,b;
//     cout<<"Enter Your first num: ";
//     cin>>a;
//     cout<<"Enter your sec num: ";
//     cin>>b;
//     cout<<"Numbers are: "<<endl<<max({a,b})<<endl<<min({a,b});
    
//     return 0;
//  }

//question 4
//  int main(){
//     int a,b,c;
//     cout<<"Enter Your first side: ";
//     cin>>a;
//     cout<<"Enter your sec side: ";
//     cin>>b;
//     cout<<"Enter your third side: ";
//     cin>>c;
//     if(pow(a,2)==pow(b,2)+pow(c,2) || pow(b,2)==pow(a,2)+pow(c,2) || pow(c,2)==pow(b,2)+pow(a,2) ){
//         cout<<"Triangle is right angled";
//     }
//     else{
//         cout<<"Triangle is not right angled";
//     }
    
//     return 0;
//  }

// question 5
//  int main(){
//     float a,b,c;
//     cout<<"Enter Your first num: ";
//     cin>>a;
//     cout<<"Enter your sec num: ";
//     cin>>b;
//     cout<<"Enter your third num: ";
//     cin>>c;
//     cout<<"Slope of line is "<<(-a/b)<<endl;
//     if (b==0){
//         cout<<"line is Vertical"<<endl;
//     }
//     else{
//         cout<<"line is not Vertical"<<endl;
//     }

//     return 0;
//  }

// question 6

//  int main(){
//     float a,b,c,x1,x2,d,real,img;
//     cout<<"Enter Your first num: ";
//     cin>>a;
//     cout<<"Enter your sec num: ";
//     cin>>b;
//     cout<<"Enter your third num: ";
//     cin>>c;
//     d=pow(b,2)-(4*a*c);
//     if (d>0){
//         x1=(-b+sqrt(d))/(2*a);
//         x2=(-b-sqrt(d))/(2*a);
//         cout<<x1<<endl<<x2;
//     }
//     else if (d==0){
//         x1=(-b+sqrt(d))/(2*a);
//         cout<<x1;
//     }
//     else if (d<0){
//         real= -b/(2*a);
//         img =sqrt(-d)/(2*a);
//         cout<<real<<endl;
//         cout<<img<<endl;
//         cout<<"-"<<img<<endl; 
//     }
//     else{
//         cout<<"No valid roots here";
//     }

//     return 0;
//  }

// question 7

//  int main(){
//     float a,b,c,x1,x2,d,real,img;
//     cout<<"Enter Your first num: ";
//     cin>>a;
//     cout<<"Enter your sec num: ";
//     cin>>b;
//     cout<<"Enter your third num: ";
//     cin>>c;
//     d=pow(b,2)-(4*a*c);
//     if (d>0){
//         x1=(-b+sqrt(d))/(2*a);
//         x2=(-b-sqrt(d))/(2*a);
//         cout<<x1<<endl<<x2;
//     }
//     else if (d==0){
//         x1=(-b+sqrt(d))/(2*a);
//         cout<<x1;
//     }
//     else if (d<0){
//         real= -b/(2*a);
//         img =sqrt(-d)/(2*a);
//         cout<<real<<"+"<<img<<"i"<<endl;
//         cout<<real<<"-"<<img<<"i"<<endl; 

//     }
//     else{
//         cout<<"No valid roots here";
//     }

//     return 0;
//  }

//question 8

//  int main(){
//     int a,b,c;
//     cout<<"Enter Your first num: ";
//     cin>>a;
//     cout<<"Enter your sec num: ";
//     cin>>b;
//     cout<<"Enter your third num: ";
//     cin>>c;
//     if (a==b){
//         cout<<"Unique number is "<<c;
//     }
//     else if (a==c){
//         cout<<"Unique number is "<<b;
//     }
//     else if(b==c){
//         cout<<"Unique number is "<<a;
//     }
//     else {
//         cout<<"No unique number here";
//     }
//     return 0;
//  }

// quewstion 9

//  int main(){
//     int a,b,c,d,x;
//     list<int> list1;
//     cout<<"Enter Your first num: ";
//     cin>>a;
//     cout<<"Enter your sec num: ";
//     cin>>b;
//     cout<<"Enter your third num: ";
//     cin>>c;
//     cout<<"Enter your fourth num: ";
//     cin>>d;
//     cout<<"Enter your Finding num: ";
//     cin>>x;
//     list1={a,b,c,d};
//     for (int i: list1){
//         if (i==x){
//             if (i==a){
//                 cout<<"x is equal to a";
//             }
//             if (i==b){
//                 cout<<"x is equal to b";
//             }            
//             if (i==c){
//                 cout<<"x is equal to c";
//             }
//         }
//     }
//     return 0;
//  }

// question 10

//  int main(){
//     int a,b,c,d,x,l;
//     l=0;
//     list<int> list1;
//     cout<<"Enter Your first num: ";
//     cin>>a;
//     cout<<"Enter your sec num: ";
//     cin>>b;
//     cout<<"Enter your third num: ";
//     cin>>c;
//     cout<<"Enter your fourth num: ";
//     cin>>d;
//     cout<<"Enter your Finding num: ";
//     cin>>x;
//     list1={a,b,c,d};
//     for (int i:list1){
//         if (i==x){
//             l++;
//         }
//     }
//     cout<<l;
//     return 0;
//  }

// question 11

//  int main(){
//     int a,b,c,l;
//     list<int> list1;
//     cout<<"Enter Your first num: ";
//     cin>>a;
//     cout<<"Enter your sec num: ";
//     cin>>b;
//     cout<<"Enter your third num: ";
//     cin>>c;
//     list1={a,b,c};
//     for (int i:list1){
//         if (a>b && a<c || b>a && c<a){
//             l=a;
//         }
//         else if (b>a && b<c || a>b && c<b){
//             l=b;
//         }
//         else if (c>b && c<a || b>c && a<c){
//             l=c;
//         }
//     }
//     cout<<"Number is: "<<l;
//     return 0;
//  }

// question 12

// int main(){
//     float p,q,r,a,b,c,dist,cent_pt,chord_len,area;
//     cout <<"Enter your x coordinate for circle: ";
//     cin>>p;
//     cout <<"Enter your y coordinate for circle: ";
//     cin>>q;
//     cout <<"Enter radius: ";
//     cin>>r;
//     cout<<"ax+by+c=0"<<endl;
//     cout <<"Enter your a for line: ";
//     cin>>a;
//     cout <<"Enter your b for line: ";
//     cin>>b;
//     cout <<"Enter your c for line: ";
//     cin>>c;
//     dist = (fabs(a * p + b * q + c))/(sqrt(pow(a,2) + pow(b,2)));
//     if (r>dist){
//         cout<<"Line and circle Intersects"<<endl;
//         chord_len=2*(sqrt(pow(r,2)-pow(dist,2)));
//         area=(chord_len*dist)/2;
//         cout<<"Area of Triangle is: "<<area;
//     }
//     else {
//         cout<<"no intersection";
//     }
//     return 0;
// }

// Simple calculator using switch
// void sum(){
//     int x, y, z;
//     cout << "Enter your first number: ";
//     cin >> x;
//     cout << "Enter your second number: ";
//     cin >> y;
//     z = x + y;
//     cout << "Your number is " << z << endl<<endl;   
// }

// void diff(){
//     int x, y, z;
//     cout << "Enter your first number: ";
//     cin >> x;
//     cout << "Enter your second number: ";
//     cin >> y;
//     z = x - y;
//     cout << "Your number is " << z << endl<<endl;
// }
// void mult(){
//     int x,y,z;
//     cout << "Enter your first number: ";
//     cin >> x;
//     cout << "Enter your second number: ";
//     cin >> y;
//     z = x * y;
//     cout << "Your number is " << z << endl<<endl;
// }
// void divi(){
//     int x,y,z;
//     cout << "Enter your first number: ";
//     cin >> x;
//     cout << "Enter your second number: ";
//     cin >> y;
//     z = x / y;
//     cout << "Your number is " << z << endl<<endl;
// }

// int main(){
//     int inp;
//     cout << "\n1.Sum\n2.Diff\n3.Multiply\n4.Division\n\n";
//     cout << "Enter your choice: ";
//     cin >> inp;
//     switch(inp){
//         case 1:
//             sum();
//             break;
//         case 2:
//             diff();
//             break;
//         case 3:
//             mult();
//             break;
//         case 4:
//             divi();
//             break;
//         default:
//             cout<<"Not a valid input"<<endl;
//     }
//     return 0;
// }
// simple caluclator end

// Sum of first 10 natural numbers
// int main(){
//     int y=0;
//     for(int x=1;x<=10;x++){
//         y+=x;
//     }
//     cout<<y;
//     return 0;
// }

//Output design
int main(){
    int inp,roll;
    char choic;
    while (true){
    cout<<"**************************************************** Program For Attendance **************************************************** "<<endl;
    cout<<"                                                 1. Add Attendance of children"<<endl;
    cout<<"                                                 2. Remove Attendance of children"<<endl;
    cout<<"                                                 3. Check Attendance of children"<<endl;
    cout<<"                                                 4. Exit"<<endl;
    cout<<"Enter your chocie: ";
    cin>>inp;
    if (inp==1){
        cout<<"                                                    Add Attendance of children"<<endl;
        cout<<"Enter Roll no: ";
        cin>>roll;
        cout<<"Mark Present for "<<roll<<" (Y/N): ";
        cin>>choic;
        choic=toupper(choic);
        if (choic=='Y'){
            cout<<roll<<" Marked Present";
            break;
        }
        else{
            cout<<"Nothing changed";
            break;
        }
    }
    else if(inp==2){
        cout<<"                                                    Remove Attendance of children"<<endl;
        cout<<"Enter Roll no: ";
        cin>>roll;
        cout<<"Mark Absent for "<<roll<<" (Y/N): ";
        cin>>choic;
        choic=toupper(choic);
        if (choic=='Y'){
            cout<<roll<<" Marked Absent";
            break;
        }
        else{
            cout<<"Nothing changed";
            break;
        }
    }
    else if (inp==3){

    }

    }
    return 0;
}