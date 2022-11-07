#include <stdio.h>
#include <stdlib.h>

//intializing struct node
struct Node
{
    int data;
    struct Node *link;
};

void create_link_list(struct Node *ptr)
{
    printf("The list is :");
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
//memory allocation for the number of nodes
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));
    struct Node *forth = malloc(sizeof(struct Node));
    struct Node *fifth = malloc(sizeof(struct Node));

//values of the nodes and their link updation
    head->data = 20;
    head->link = second;

    second->data = 30;
    second->link = third;

    third->data = 40;
    third->link = forth;

    forth->data = 40;
    forth->link = fifth;

    fifth->data = 40;
    fifth->link = NULL;

//function to print the linked list
    create_link_list(head);

    return 0;
}