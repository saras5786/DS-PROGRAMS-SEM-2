#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int data;
	struct node *link;
};
int main()
{
	struct node *head=NULL,
	*newnode=NULL,
	*newnode2=NULL,
	*newnode3=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode2=(struct node*)malloc(sizeof(struct node));
	newnode3=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter node 1 data:");
	scanf("%d",&newnode->data);
	head=NULL;
	newnode->link=NULL;
	newnode2->link=NULL;
	printf("\nEnter node 2 data:");
	scanf("%d",&newnode2->data);
head=newnode;
newnode->link=newnode2;
printf("%d\n%d",newnode->data,newnode2->data);
	return 0;
	
}
