#include<bits/stdc++.h>
using namespace std;
class cuboid{
private:
int len,bre,hei;
public:
void setLen(int len){
    this->len=len;
}
void setBre(int bre){
    this->bre=bre;
}
void setHei(int hei){
    this->hei=hei;
}
void print(){
    cout<<" Length : "<<this->len<<"  ";
    cout<<" Breadth : "<<this->bre<<"  ";
    cout<<" Height : "<<this->hei<<endl;
}
};
int main(){
    cuboid c1;
    c1.setLen(2);
    c1.setBre(3);
    c1.setHei(4);
    c1.print(); 
    
    cuboid c2;
    c2=c1;
    // c2.setLen(5);
    c2.print();
    c1.setLen(5);
    c1.print();
    c2.print();
    return 0;
}