

#include <stdio.h>
#include <stdlib.h>

// Node structure for BST
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
struct Node *insertNode(struct Node *root, int data)
{
    if (root == NULL)
    {
        return createNode(data); // Create a new node if tree is empty
    }
    if (data < root->data)
    {
        root->left = insertNode(root->left, data); // Insert into the left subtree
    }
    else if (data > root->data)
    {
        root->right = insertNode(root->right, data); // Insert into the right subtree
    }
    return root;
}

// Function to perform binary search in a BST
int binarySearchBST(struct Node *root, int target)
{
    if (root == NULL)
    {
        return 0; // Target not found
    }
    if (root->data == target)
    {
        return 1; // Target found
    }
    else if (target < root->data)
    {
        return binarySearchBST(root->left, target); // Search in the left subtree
    }
    else
    {
        return binarySearchBST(root->right, target); // Search in the right subtree
    }
}

// Function for in-order traversal (optional for visualization)
void inOrderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

int main()
{
    struct Node *root = NULL;

    // Insert nodes into the BST
    root = insertNode(root, 15);
    root = insertNode(root, 10);
    root = insertNode(root, 20);
    root = insertNode(root, 8);
    root = insertNode(root, 12);
    root = insertNode(root, 17);
    root = insertNode(root, 25);

    // Perform in-order traversal
    printf("In-order Traversal of BST: ");
    inOrderTraversal(root);
    printf("\n");

    // Perform binary search in BST
    int target = 12;
    if (binarySearchBST(root, target))
    {
        printf("Element %d is found in the BST.\n", target);
    }
    else
    {
        printf("Element %d is not found in the BST.\n", target);
    }

    return 0;
}