#include<iostream>
#include<string>
using namespace std;
string remove(string s,string part){
    while(s.size()!=0 && s.find(part)<s.size())
    {s.erase(s.find(part),part.size());}
    return s;
}
int main(){
    string s;
    cin>>s;
    string part;
    cin>>part;
    cout<<remove(s,part);
    return 0;
    
}