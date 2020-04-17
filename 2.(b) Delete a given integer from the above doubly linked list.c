#include<stdio.h>
#include<stdlib.h>
struct node { struct node *prev;
             int data;
            struct node *next;
           } *head;
 void create(int n)
 {
     int data;
     head=(struct node*)malloc(sizeof(struct node));
     if(head==NULL)
     {
    printf("Memory isn't Allocated");
     }
     struct node *temp;
     temp=head;
    printf("Enter the data of first node:");
    scanf("%d",&data);
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    for(int i=1;i<n;i++)
    { printf("enter the data:");
      scanf("%d",&data);
      struct node *mynode=(struct node*)malloc(sizeof(struct node));
      if(mynode==NULL)
      {
    printf("Memory isn't Allocated");
      }
      mynode->data=data;
      mynode->next=NULL;
      mynode->prev=head;
      temp->next=mynode;
      temp=temp->next;
}
printf("LIST Created Successfully.");}
del(int x)
{ struct node *temp=head;
struct node *t;
while((temp->data)!=x)
{   t=temp;
    temp=temp->next;
}
temp=temp->next;
struct node *s;
s=temp;
temp->prev=t;
t->next=s;
}
void main()
{ int n,x;
printf("enter the value of n and x:");
scanf("%d %d",&n,&x);
create(n);
del(x);
}











