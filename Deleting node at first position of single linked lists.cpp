#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head=NULL, *temp=NULL;

// create function
void create()
{
    struct node *newnode;
    int i,n;

    printf("\nenter n size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nenter node data: ");
        scanf("%d",&newnode->data);
        newnode->link=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->link=newnode;
            temp=newnode;
        }
    }
}

// display function
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("NULL");
}

int main()
{
    create();

    printf("\nBEFORE DELETION: ");
    display();

    // deleting first node
    if(head==NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        temp=head;
        head=head->link;
        free(temp);
    }

    printf("\nAFTER DELETING FIRST NODE: ");
    display();

    return 0;
}
