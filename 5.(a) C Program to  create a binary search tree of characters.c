#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
struct node
{
  char data;
  struct node *left;
  struct node *right;
}*Node;


struct node *create()
{
  char x;
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data for the nodes (0 for no data)");
  scanf("%c",&x);
  newnode->data=x;
  if(x==0)
  {
    printf ("Not entered any data\n");
    return NULL;
  }
  printf("Enter the left child of the rooted data : %c\t",newnode->data);
  newnode->left=create();
  printf("Enter the right child of the rooted data : %c\t",newnode->data);
  newnode->right=create();
  return newnode;
}



 main ()
  {
    create();
    }
