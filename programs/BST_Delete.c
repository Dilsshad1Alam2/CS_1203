#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

// new node
struct node *new_node(int item)
{
    struct node *current = malloc(sizeof(struct node));
    current->data = item;
    current->left = current->right = NULL;
    return current;
}

// Inorder Traversal of tree

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);        // Traverse left subtree
        printf("%d  ", root->data); // Traverse root node
        inorder(root->right);       // Traverse right subtree
    }
}

// Insertion of a node

struct node *insert(struct node *node, int data)
{

    if (node == NULL)
        return new_node(data);

    // Traverse to the right place and insert the node
    if (data < node->data)
    {
        node->left = insert(node->left, data);
    }

    else
    {
        node->right = insert(node->right, data);
    }

    return node;
}

// To find the inorder successor
struct node *find_min(struct node *node)
{
    struct node *current = node;
    while (current && current->left != NULL) // leftmost leaf
        current = current->left;

    return current;
}

// Node deletion
struct node *delete_node(struct node *root, int data)
{

    if (root == NULL)
        return root;

    if (data < root->data) // look for node to delete
        root->left = delete_node(root->left, data);
    else if (data > root->data)
        root->right = delete_node(root->right, data);

    else
    {

        if (root->left == NULL) // no child or 1 child case
        {
            struct node *current = root->right;
            free(root);
            return current;
        }
        else if (root->right == NULL)
        {
            struct node *current = root->left;
            free(root);
            return current;
        }

        struct node *current = find_min(root->right); // 2 children case

        root->data = current->data;

        root->right = delete_node(root->right, current->data);
    }
    return root;
}

// Insert values from here:
int main()
{
    struct node *root = NULL;
    root = insert(root, 12);
    root = insert(root, 6);
    root = insert(root, 14);
    root = insert(root, 2);
    root = insert(root, 9);
    root = insert(root, 40);

    printf("The inorder traversal of the binary tree is :");
    inorder(root);

    printf("\nAfter deleting \n");
    root = delete_node(root, 12);
    root = delete_node(root, 12);
    printf("The inorder traversal of the binary tree is ");
    inorder(root);
}