    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/


class Stack {
	// Define the data members
   public:
    
    Node* head;
    Node* tail;
    int size;
    
    Stack() {
        // Implement the Constructor
        this->size=0;
        this->head=NULL;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        return size == 0;
    }

    void push(int element) {
        // Implement the push() function
        Node* temp = new Node(element);
        size++;
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }

    int pop() {
        // Implement the pop() function
        if(isEmpty()){
            return -1;
        }
        size--;
        int ans = tail->data;
        //Node* temp = head;
        /*while(temp!=NULL && temp->next!=NULL && temp->next->next!=NULL) {
            temp = temp->next;;
        }
        if(temp->next == NULL){
            head = NULL;
            tail = NULL;
            return ans;
        }
        temp->next = NULL;
        tail = temp;
        
        return ans;*/
        
        Node* temp = head;
        while(temp&&temp->next&&temp->next->next) {
            temp = temp->next;
        }
        
        if(temp->next == NULL){
            head = NULL;
            tail = NULL;
            return ans;
        }
        
        temp->next = NULL;
        delete tail;
        tail = temp;
        return ans;
        
    }

    int top() {
        // Implement the top() function
        if(isEmpty()){
            return -1;
        }
        return tail->data;
    }
};
