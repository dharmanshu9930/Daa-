#include<stdio.h>
#include<malloc.h>
struct node
{
	int priority;
	int info;
	struct node *next;
}*front=NULL;
main()
{
	int choice;
	while(1)
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Quit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Wrong choice\n");
		}
	}
}
insert()
{
	struct node *temp,*ptr;
	int item,prior;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter item to be added in the queue= ");
	scanf("%d",&item);
	printf("\n Enter priority value= ");
	scanf("%d",&prior);
	temp->info=item;
	temp->priority=prior;
	if(front==NULL||prior<front->priority)
	{
		temp->next=front;
		front=temp;
	}
	else
	{
		ptr=front;
		while(ptr->next!=NULL&&ptr->next->priority<=prior)
			ptr=ptr->next;
		temp->next=ptr->next;
		ptr->next=temp;
	}
};
del()
{
	struct node *temp;
	if(front==NULL)
		printf("\nQueue Underflow");
	else
	{
		temp=front;
		printf("\nDeleted item is %d",temp->info);
		front=front->next;
		free(temp);
	}
}
display()
{
	struct node *ptr;
	ptr = front;
	if(front==NULL)
		printf("\n Queue is empty");
	else
	{
		printf("\n Queue is=");
		printf("\nPriority   Item");
		while(ptr!=NULL)
		{
			printf("\n%5d    %5d",ptr->priority,ptr->info);
			ptr=ptr->next;
		}
	}
}