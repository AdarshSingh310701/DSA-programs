#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * left;
	struct node * right;
};
struct node  * newNode(int data)
{
	
	struct node * node=(struct node *)malloc(sizeof(struct node));
	node->data=10;
	node->left=NULL;
	node->right=NULL;
	return(node);
}
int main()
{
	struct node * root=newNode(10);
	root->left=newNode(5);
	root->right=newNode(15);
	printf("root node =%d\n",root->left->data);
	root->left->left=newNode(2);
	root->left->left=newNode(4);
	root->right->left=newNode(12);
	printf("root node =%d\n",root->data);
	printf("root node =%d\n",root->left->data);
	printf("root left data=%d",root->left->left->data);
	
  return 0;
}
