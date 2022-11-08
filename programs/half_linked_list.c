#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *link;
};

struct node *add_beg(struct node *begin, int data)
{
        struct node *temp;
        temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->link = begin;
        begin = temp;
        return begin;
}

struct node *add_end(struct node *begin, int data)
{
        struct node *p, *temp;
        temp = malloc(sizeof(struct node));
        temp->data = data;
        p = begin;
        while (p->link != NULL)
                p = p->link;
        p->link = temp;
        temp->link = NULL;
        return begin;
}

struct node *create_list(struct node *begin)
{
        int i, n, data;
        printf("No of Nodes:");
        scanf("%d", &n);
        begin = NULL;
        if (n == 0)
                return begin;

        printf("\nInsert Elements:");
        scanf("%d", &data);
        begin = add_beg(begin, data);

        for (i = 2; i <= n; i++)
        {
                printf("\nInsert Elements:");
                scanf("%d", &data);
                begin = add_end(begin, data);
        }
        return begin;
}

void print(struct node *begin)
{
        struct node *p;
        if (begin == NULL)
        {
                printf("\nThe List is Empty.\n");
                return;
        }
        p = begin;
        while (p != NULL)
        {
                printf("%d ", p->data);
                p = p->link;
        }
        printf("\n");
}

int split_list(struct node *begin, struct node **begin_2)
{
        struct node *first, *second;
        if (begin->link == NULL)
                return 0;

        first = second = begin;

        while (second->link != NULL && second->link->link != NULL)
        {
                first = first->link;
                second = second->link->link;
        }
        *begin_2 = first->link;
        first->link = NULL;
}

int main()
{
        struct node *begin = NULL, *begin_2 = NULL;

        begin = create_list(begin);
        printf("Inserted List is: ");
        print(begin);

        if (begin != NULL)
        {
                split_list(begin, &begin_2);
        }
        printf("First Half of the List: ");
        print(begin);
               printf("Second Half of the List: ");
        print(begin_2);

        return 0;
}
