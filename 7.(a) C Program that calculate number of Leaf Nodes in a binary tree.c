#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
int *create()
{ int data;
struct node *root= (struct node*)malloc(sizeof(struct node));
printf("Enter the data in the root node.(-1 for no data.)\n");
scanf("%d",&data);
if(data==-1)
{
    printf("NO data is entered.\n");
    return NULL;
}
root->data=data;
printf("Enter the left data of the root data:%d\n",root->data);
root->left=create();
printf("Enter the right data of the root data:%d\n",root->data);
root->right=create();
}
LeafCount(struct node* node)
{
  if(node == NULL)
    return 0;
  if(node->left == NULL && node->right==NULL)
    return 1;
  else
    return LeafCount(node->left)+
           LeafCount(node->right);
}
void main()
{ int x;
struct node *root=create();
x=LeafCount(root);
printf("The number of leaf nodes are :%d",x);
}
