#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    printf("The list is: \n");
    while (ptr != NULL)
    {
        printf("%d   ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;

    //allocating memory for nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));

    //Linking Nodes
    head->data = 4;
    head->next = second;

    second->data = 19;
    second->next = third;

    third->data = 12;
    third->next = fourth;

    fourth->data = 7;
    fourth->next = fifth;

    fifth->data = 14;
    fifth->next = sixth;

    sixth->data = 47;
    sixth->next = NULL;

    traversal(head);
    return 0;
}
