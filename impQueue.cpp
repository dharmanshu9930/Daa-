#include <iostream>
using namespace std;
class Queue{
public:
int rear;
int front;
int * arr;
int size;
Queue(int n){
    rear=-1;
    front=-1;
    arr=new int[n];
    size=n;
}
void push(int val){
    if(rear>=size){
        cout<<"Queue Overflow:"<<endl;
        return ;
    }
    if(front==-1){
        front++;
    }
    rear++;
    arr[rear]=val;
}
void pop(){
    if(front>rear||front==-1){
        cout<<"Queue Underflow"<<endl;
        return ;
    }
    front++;
}
void print(){
    if(front>rear||front==-1){
        cout<<"Queue Underflow"<<endl;
        return ;
    }
    int k=front;
    while(k<=rear){
        cout<<arr[k]<<" ";
        k++;
    }
    cout<<endl;
}
};
int main(){
Queue Q(10);
Q.pop();
Q.print();
Q.push(5);
Q.push(10);
Q.print();
Q.pop();
Q.push(15);
Q.print();
}