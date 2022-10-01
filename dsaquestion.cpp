/*#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
class Stack{
     private:
     int top;
     char arr[4];

     public:
     Stack ()
     {
          top = -1;
          for(int i=0;i<4;i++)
          {
               arr[i]=0;
          }
     }
     void push(char value)
     {
          if(top==4)
          {
               cout<<"stack overflow"<<endl;
          }
          else
          {
               top++;
               arr[top]=value;
          }
     }
     int pop()
     {
          if(top==-1)
          {
               cout<<"stack underflow"<<endl;
               return 0;
          }
          else
          {
               int popvalue = arr[top];
               arr[top]=0;
               top--;
               return popvalue;  
          }
     }
      void display()
     {
          cout<<"all values of stack are"<<endl;
          for(int i=3;i>=0;i--)
          {
               cout<<arr[i]<<endl;
          }
     }
};
int main(){
     char value;
     Stack s1;
     
     cout<<"Enter first char"<<endl;
     cin >> value;
     s1.push(value);
     
     cout<<"Enter second char"<<endl;
     cin >> value;
     s1.push(value);
     
     cout<<"Enter third char"<<endl;
     cin >> value;
     s1.push(value);
     
     cout<<"Enter fourth char"<<endl;
     cin >> value;
     s1.push(value);

     s1.display();

     s1.pop();
     s1.display();
     s1.pop();
     s1.display();
     s1.pop();
     s1.display();
     s1.pop();
     s1.display();


     return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
class Queue{
  private:
     int front;
     int rear;
     char arr[4];

  public:
    Queue() {
      front = -1;
      rear = -1;
      for (int i = 0; i < 5; i++) {
        arr[i] = 0;
      }
    }

    bool isEmpty() {
    if (front == -1 && rear == -1)
      return true;
    else
      return false;
    }

    bool isFull(){
     if(rear==4)
      return true;
     else
      return false;
    }

    void enqueue(int val){
     if(isFull()){
        cout<<"Queue Full"<<endl;
     }
     else if(isEmpty()){
        rear=0;
        front=0;
        arr[rear]=val; 
     }  
     else{
        rear++;
        arr[rear]=val;  
     } 
    }

    int dequeue() {
    int x = 0;
    if (isEmpty()) {
      cout <<endl<< "Queue is Empty" << endl;
      return x;
    } else if (rear == front) {
      x = arr[rear];
      rear = -1;
      front = -1;
      return x;
    } else {
      cout <<endl<< "front value: " << front << endl;
      x = arr[front];
      arr[front] = 0;
      front++;
      return x;
    }
  }

   void display() {
    cout << endl<<"All values in the Queue are - " << endl;
    for (int i = 0; i < 5; i++) {
      cout << arr[i] << "  ";
    }
  }

};
int main(){
     char value;
     Queue s1;
     
     cout<<"Enter first char"<<endl;
     cin >> value;
     s1.enqueue(value);
     
     cout<<"Enter second char"<<endl;
     cin >> value;
     s1.enqueue(value);
     
     cout<<"Enter third char"<<endl;
     cin >> value;
     s1.enqueue(value);
     
     cout<<"Enter fourth char"<<endl;
     cin >> value;
     s1.enqueue(value);

     s1.display();

     s1.dequeue();
     s1.display();

     s1.dequeue();
     s1.display();

     s1.dequeue();
     s1.display();

     s1.dequeue();
     s1.dequeue();

     return 0;
}