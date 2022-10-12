#include <iostream>
using namespace std;
  struct Node{
      int data;
      int priority;
      struct Node* link;
   };
struct Node* front=NULL;

void Enqueue(int d,int p){
    Node* newNode= (Node*)malloc(sizeof(Node));
   newNode-> data =d;
   newNode -> priority =p;
   newNode->link=NULL;
   if(front==NULL){
      front=newNode;
   }  
   else if(front->priority<newNode->priority){
      newNode->link=front;
      front=newNode;
   }
   else{
      struct Node* temp=front;
      while(temp->link!=NULL && temp->link->priority>newNode->priority){
         temp=temp->link;}

         newNode->link=temp->link; 
         temp->link=newNode;
   }
}

void Dequeue(){
   struct Node* temp=front;
   front=front->link;
   free(temp);
}

int peek(){
   return front -> data;
}

void display(){
    struct Node *ptr;
    ptr = front;
    if(ptr==NULL){
      cout<<"Empty Queue";
    }
    else{
    while (ptr != NULL)
    {
        cout << ptr->data << "|"<<ptr->priority<<" -> ";
        ptr = ptr->link;
    }
    cout<<"NULL";
    }
    cout<<endl;
    }

void display_queue(){
   struct Node *ptr;
    ptr = front;
    if(ptr==NULL){
      cout<<"Empty Queue";
    }
    else{
    while (ptr != NULL)
    {
        cout << ptr->data<<" ";
        ptr = ptr->link;
    }
    }
    cout<<endl;
}



int main(){
      Enqueue(5,1);
      Enqueue(6,0);
      Enqueue(4,2);
      Enqueue(7,3);
      Enqueue(10,4);
      Enqueue(9,4);
      cout<<"Initial priority queue using linked list:"<<endl;
      display();
      cout<<"---------------"<<endl;
      cout<<"Priority queue after dequeue:"<<endl;
      Dequeue();
      display();
      cout<<"---------------"<<endl;
      cout<<"Printing in queue format:"<<endl;
      display_queue();

return 0;

   }
 

