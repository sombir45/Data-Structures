#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;

}*front=NULL,*rear=NULL;

void enqueuef()
{
	printf("Enter data for enqueue from front\n");
	if(front==NULL)
	{
		front=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&front->data);
		front->next=front->prev=NULL;
		rear=front;
	}
	else
	{
		struct node *t;
		t=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&t->data);
		t->prev=NULL;
		t->next=front;
		front->prev=t;
		front=t;
	}
	printf("Enqueue successfull\n");
}
void enqueuer()
{
	printf("Enter data for enqueue from rear\n");
		if(rear==NULL)
		{
			rear=(struct node *)malloc(sizeof(struct node));
			scanf("%d",&rear->data);
			rear->next=rear->prev=NULL;
			front=rear;
		}

	else
	{
		struct node *t;
		t=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&t->data);
		rear->next=t;
		t->prev=rear;
		t->next=NULL;
		rear=t;
	}
	printf("Enqueue successfull\n");
}
void dequeuef()
{
	if(front==NULL)
	{
		rear=NULL;
		printf("Queue is Empty\n");
	}
	else
	{
		struct node *t=front;
		if(front->data==rear->data)
		{
			front=rear=NULL;
		}
		else
			front=front->next;
		int x=t->data;
		free(t);
		printf("%d is deleted\n",x);


	}
}
void dequeuer()
{
	if(rear==NULL)
	{
		front=NULL;
		printf("Queue is Empty\n");
	}
	else
	{
		struct node *t=rear;
		if(front->data==rear->data)
		{
			front=rear=NULL;
		}
		else
		rear=rear->prev;
		int x=t->data;
		free(t);
		printf("%d is deleted\n",x);
	}
}

void display(struct node *p)//This function displays the link list
{
	printf("The linked list is\n");
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");

}

int main()
{
	int n;
	printf("Enter 1 for enqueue from front\nEnter 2 for enqueue from rear\nEnter 3 for dequeue from front\nEnter 4 for dequeue from rear\nEnter 5 for displaying the queue\nAny other key for exit\n");


	while(1)
	{
		scanf("%d",&n);
		switch(n)
		{
			case 1:enqueuef();
			break;
			case 2:enqueuer();
			break;
			case 3:dequeuef();
			break;
			case 4:dequeuer();
			break;
			case 5:display(front);
			break;
			default:exit(0);
		}
	}
	return 0;
}
