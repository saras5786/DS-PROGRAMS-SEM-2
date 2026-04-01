#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;
    struct node *link;
};

struct node *head = 0, *temp = 0;

void create() {
    struct node *newnode;
    int i, n;
    printf("\nEnter n size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter node %d data: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->link = 0;

        if (head == 0) {
            temp = head = newnode;
        } else {
            temp->link = newnode;
            temp = newnode;
        }
    }
}

void display() {
    temp = head;
    while (temp != 0) {
        printf(" %d", temp->data);
        temp = temp->link;
    }
}

int main() {
    create();
    display();
    return 0;
}

