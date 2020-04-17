#include<stdio.h>
#include<stdlib.h>
struct node{ int data;              // Creating a node.
            struct node *link;
            }*head;
void createnode(int n)        //Function to create new nodes.
{ int data;
head=(struct node*)malloc(sizeof(struct node));  //Allocating Memory to head.
if(head==NULL)
{
printf("Memory not allocated.");
}
struct node *temp;
printf("Enter the data of first node:");
scanf("%d",&data);
head->data=data;
head->link=NULL;
temp=head;
for(int i=1;i<n;i++)
{ struct node *mnode=(struct node*)malloc(sizeof(struct node)); //Creating and Allocating Memory to a new node.
if(mnode==NULL)
{
printf("Memory not allocated.");
}
printf("Enter the data:");
scanf("%d",&data);
mnode->data=data;
mnode->link=NULL;
temp->link=mnode;
temp=temp->link;
}
printf("List Created Successfully");
}
void del(int n) //Function to delete the given number from the linked list.
{ struct node *temp,*t;
temp=head;
while((temp->data)!=n)
{ t=temp;
  temp=temp->link;
}
temp=temp->link;
 t->link=temp;
 }
void main()
{ int n,x;
printf("Enter the value of n and x:");
scanf("%d %d",&n,&x);
createnode(n);
del(x);
}



