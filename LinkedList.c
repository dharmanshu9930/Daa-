#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node 
{
    int data;
    struct node *next;
};

struct node *head,*temp,*newnode,*ptr;

struct node* create_list(struct node *head)
{
    char ch;
    int item;
    head=(struct node*)malloc(sizeof(struct node));
    temp=head;
    do{
        printf("enter the value of node");
        scanf("%d",&item);
        temp->data=item;
        temp->next=NULL;
        fflush(stdin);
        printf("do you want another insert node");
        scanf("%c",&ch);
        if(ch=='y')
        {
            temp->next=(struct node*)malloc(sizeof(struct node));
            temp=temp->next;
        }
        else
        {
            break;
        }
    }while(ch=='y');
    return(head);
}

void display(struct node *head)
{
    if(head==NULL)
    printf("Linked List is empty");
    else
    {
    temp=head;
    while(temp!=0)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    }
}

struct node* insert_beg(struct node *head)
{
    int item;
    printf("\nenter item");
    scanf("%d",&item);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;    
    }
    return(head);
}

void insert_end()
{
    int item;
    printf("enter item");
    scanf("%d",&item);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void insert_pos()
{
    int item,x;
    printf("enter value where you want to insert element before");
    scanf("%d",&x);
    printf("enter item");
    scanf("%d",&item);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->data!=x && temp->next!=NULL)
        {
            ptr=temp;
            temp=temp->next;
        }
        if(temp->data==x)
        {
            newnode->next=temp;
            ptr->next=newnode;
        }
    }
}

struct node *delete_beg(struct node *head)
{
    temp = head;
    if(head == NULL)
    {
    printf("Linked list is empty");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(temp);
    }
    else
    {
        head = head->next;
        free(temp);
    }
    return(head);
}

void delete_end(struct node *head)
{
    temp = head;
    if(head == NULL)
    {
    printf("Linked list is empty");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(temp);
    }
    else
    {
        while(temp->next!=NULL)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=NULL;
        free(temp);
    }
}
void delete_pos()
{
    int x;
    printf("enter value where you want to delete element before");
    scanf("%d",&x);
    if(head == NULL)
    printf("Linked list is empty");
    else
    {
        ptr=temp=head;
        while(temp->data !=x && temp->next!=NULL)
        {
            ptr=temp;
            temp=temp->next;
        }
        if(temp->data==x)
        {
            ptr->next=temp->next;
            free(temp);
        }
    }
}

int main()
{
    int ch;
    char c;
    do
    {
        printf("select your operation/n");
        printf("\n1.create linked list\n2.Insert at begin\n3.Insert before the element\n4.Insert at end\n5.Delete at begin\n6.delete at position\n7.delete at end \n8.display\n9.Exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            head = create_list(head);
                break;
            case 2: 
            head = insert_beg(head);
                break;
            case 3: insert_pos();
                break;;
            case 4: insert_end();
                break;
            case 5: 
            head = delete_beg(head);
                break;
            case 6: delete_pos();
                break;
            case 7: delete_end(head);
                break;
            case 8: display(head);
                break;
            case 9: break;
            default:
            printf("enter 1 to 9 no");
        }
        printf("do you want to continue press to y...");
        fflush(stdin);
        scanf("%c",&c);
    }
    while(c=='y' || c=='Y');
    return 0;
}
