

#include <stdio.h>
#include <stdlib.h>

// Node structure for sparse matrix
typedef struct Node {
    int row, col, value;
    struct Node *next;
} Node;

// Function to create a new node
Node* createNode(int row, int col, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->row = row;
    newNode->col = col;
    newNode->value = value; 
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new element into the linked list
void insert(Node** head, int row, int col, int value) {
    Node* newNode = createNode(row, col, value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the sparse matrix as a linked list
void display(Node* head) {
    if (head == NULL) {   
        printf("Empty matrix.\n");
        return;
    }
    printf("Row\tCol\tValue\n");
    while (head != NULL) {
        printf("%d\t%d\t%d\n", head->row, head->col, head->value);
        head = head->next;
    }
}

// Function to add two sparse matrices
Node* addSparseMatrices(Node* mat1, Node* mat2) {
    Node* result = NULL;

    while (mat1 != NULL && mat2 != NULL) {
        if (mat1->row == mat2->row && mat1->col == mat2->col) {
            insert(&result, mat1->row, mat1->col, mat1->value + mat2->value);
            mat1 = mat1->next;
            mat2 = mat2->next;
        } else if (mat1->row < mat2->row || 
                  (mat1->row == mat2->row && mat1->col < mat2->col)) {
            insert(&result, mat1->row, mat1->col, mat1->value);
            mat1 = mat1->next;
        } else {
            insert(&result, mat2->row, mat2->col, mat2->value);
            mat2 = mat2->next;
        }
    }

    while (mat1 != NULL) {
        insert(&result, mat1->row, mat1->col, mat1->value);
        mat1 = mat1->next;
    }

    while (mat2 != NULL) {
        insert(&result, mat2->row, mat2->col, mat2->value);
        mat2 = mat2->next;
    }

    return result;
}

// Function to transpose a sparse matrix
Node* transposeSparseMatrix(Node* mat) {
    Node* transposed = NULL;

    while (mat != NULL) {
        insert(&transposed, mat->col, mat->row, mat->value);
        mat = mat->next;
    }

    return transposed;
}

// Main function
int main() {
    Node* mat1 = NULL;
    Node* mat2 = NULL;

    // Create first sparse matrix
    printf("Enter the first sparse matrix (row, col, value):\n");
    insert(&mat1, 0, 2, 3);
    insert(&mat1, 1, 0, 5);
    insert(&mat1, 2, 1, 8);
    printf("First Sparse Matrix:\n"); 
    display(mat1);

    // Create second sparse matrix
    printf("\nEnter the second sparse matrix (row, col, value):\n");
    insert(&mat2, 0, 1, 2);
    insert(&mat2, 1, 0, 5);
    insert(&mat2, 2, 2, 7);
    printf("Second Sparse Matrix:\n");
    display(mat2);

    // Add matrices
    printf("\nResult of Matrix Addition:\n");
    Node* result = addSparseMatrices(mat1, mat2);
    display(result);

    // Transpose first matrix
    printf("\nTranspose of the First Matrix:\n");
    Node* transposed = transposeSparseMatrix(mat1);
    display(transposed);

    return 0;
}