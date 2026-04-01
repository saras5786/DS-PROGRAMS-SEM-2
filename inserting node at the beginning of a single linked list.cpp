// INSERTING NODE AT BEGINNING IN SINGLE LINKED LIST
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head=NULL, *temp=NULL, *newnode1=NULL, *newnode2=NULL;
    int i,n;

    printf("\nenter n size: ");
    scanf("%d",&n);

    // Creating initial list
    for (i=0; i<n; i++)
    {
        newnode1=(struct node*)malloc(sizeof(struct node));
        printf("\nenter node %d data:", i+1);
        scanf("%d",&newnode1->data);
        newnode1->link=NULL;

        if(head == NULL)
        {
            head=newnode1;
            temp=newnode1;
        }
        else
        {
            temp->link=newnode1;
            temp=newnode1;
        }
    }

    // Display original list
    temp=head;
    while(temp!=0)
    {
        printf("%d->", temp->data);
        temp=temp->link;
    }
    printf("NULL");

    // Inserting node at beginning
    newnode2=(struct node *)malloc(sizeof(struct node));
    printf("\nenter newnode data: ");
    scanf("%d",&newnode2->data);

    newnode2->link = head;   // important step
    head = newnode2;         // move head to new node

    // Display updated list
    temp=head;
    while(temp!=0)
    {
        printf("%d->", temp->data);
        temp=temp->link;
    }
    printf("NULL");

    return 0;
}
