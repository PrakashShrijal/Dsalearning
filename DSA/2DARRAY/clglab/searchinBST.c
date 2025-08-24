

#include <stdio.h>
#include <stdlib.h>

// Node Structure for BST
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// Function to insert a node into the BST
struct Node* insertNode(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data); // Create a new node if root is NULL
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data); // Insert in the left subtree
    } else if (data > root->data) {
        root->right = insertNode(root->right, data); // Insert in the right subtree
    }

    return root;
}
// Function to search a key in BST
int searchBST(struct Node* root, int target) {
    if (root == NULL) {
        return 0; // Target not found
    }

    if (root->data == target) {
        return 1; // Target found
    } else if (target < root->data) {
        return searchBST(root->left, target); // Search in the left subtree
    } else {
        return searchBST(root->right, target); // Search in the right subtree
    }
}
int main() {
    struct Node* root = NULL;

    // Insert nodes into the BST
    root = insertNode(root, 8);
    root = insertNode(root, 3);
    root = insertNode(root, 10);
    root = insertNode(root, 1);
    root = insertNode(root, 6);
    root = insertNode(root, 14);

    int target = 6;

    if (searchBST(root, target)) {
        printf("Element %d found in the BST.\n", target);
    } else {
        printf("Element %d not found in the BST.\n", target);
    }

    return 0;
}