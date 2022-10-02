#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
};
/*Reverse a Linked List
Node *reverselist(Node *head)
{
    Node *temp = NULL;
    Node *temp2 = NULL;
    while (head != NULL)
    {
        temp2 = head->next;
        head->next = temp;
        temp = head;
        head = temp2;
    }
    return head;
}*/

/*Middle of linked list Tortoise and Hare approach
Node *middle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}*/

/*merge two sorted linked list
Node *merge(Node *head1, Node *head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    if (head1->data >= head2->data)
        std::swap(head1, head2);

    Node *res = head1;

    while (head1 != NULL && head2 != NULL)
    {
        Node *temp = NULL;
        while (head1 != NULL && head1->data <= head2->data)
        {
            temp = head1;
            head1 = head1->next;
        }
        temp->next = head2;
        std::swap(head1, head2);
    }
    return res;
}*/

/*Remove nth node from back of the list
Node * remove(Node* head,int n)
{
    Node *dummy  = new Node();
    dummy->next= head;
    Node*fast = dummy;
    Node*slow = dummy;

    for(int i=1;i<=n;i++)
    fast = fast->next;

    while(fast->next!=NULL)
    {
        slow= slow->next;
        fast =fast->next;
    }
    slow->next = slow->next->next;
    return dummy->next;
}*/

/*Delete NTh node
Node *remove(Node *t)
{
    t->data = t->next->data;
    t->next = t->next->next;
}*/