#include<stdio.h>
#include<stdlib.h>
struct node{ int data;             //Creating a Node.
             struct node *link;
           } *head;
void newnode(int n)    // Function for creating further nodes.
{ int data;
  struct node *temp;
  printf("enter the data of first node:");
  scanf("%d",&data);
  head=(struct node*)malloc(sizeof(struct node)); //Allocating Memory to head pointer.
  if(head==NULL)
{
printf("Memory not allocated.");
}
  temp=head;
  head->data=data;
  head->link=NULL;
  for(int i=2;i<=n;i++)
  { struct node *nnode=(struct node*)malloc(sizeof(struct node)); //Creating and Allocating memory to a new node.
if(nnode==NULL)
{
printf("Memory not allocated.");
}
    printf("enter the data:");
    scanf("%d",&data);
    nnode->data=data;
    nnode->link=NULL;
    temp->link=nnode;
    temp=temp->link;
    }}
 void main()
{ int n;
printf("enter the no of elements:");
scanf("%d",&n);
newnode(n);
display();
}


