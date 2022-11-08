#include <stdio.h>
#include <stdlib.h>

// creating a linked list node
struct Node
{
	int data;
	struct Node *link;
};

// reversing algorithm
static void reverse(struct Node **head_ref)
{
	struct Node *prev = NULL;
	struct Node *current = *head_ref;
	struct Node *link = NULL;
	while (current != NULL)
	{
		link = current->link;
		// to reverse the pointer of current nodes
		current->link = prev;

		prev = current;
		current = link;
	}
	*head_ref = prev;
}

// inserting a new node
void insert(struct Node **head_ref, int inserted_data)
{
	struct Node *new_node = malloc(sizeof(struct Node));
	new_node->data = inserted_data;
	new_node->link = (*head_ref);
	(*head_ref) = new_node;
}

// linked list print funnction
void print_list(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf(" %d =>", temp->data);
		temp = temp->link;
	}
	printf(" NULL");
}

int main()
{
	struct Node *head = NULL;

	// Change here to add to the list
	insert(&head, 4);
	insert(&head, 21);
	insert(&head, 17);
	insert(&head, 42);
	insert(&head, 12);
	insert(&head, 99);
	insert(&head, 76);

	printf(" Inserted Linked List\n");
	print_list(head);

	reverse(&head);

	printf("\n Reversal of inserted linked lsit\n");
	print_list(head);

	getchar();
}
