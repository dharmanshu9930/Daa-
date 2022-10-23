#include<iostream>
using namespace std;
float absolute(float var){
    if(var<0.0)
    var = -var;
    return var;
}
int absolute(int var){
    if(var<0)
    var = -var;
    return var;
}
int main(){
    cout<<"Absolute value of -5 = "<<absolute(-5)<<endl;
    cout<<"Absolute value of 55 = "<<absolute(552)<<endl;
    return 0;
}
