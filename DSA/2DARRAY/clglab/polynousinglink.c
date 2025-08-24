

#include <stdio.h>
#include <stdlib.h>

// Node structure for a term in the polynomial
typedef struct Node {
    int coeff;     // Coefficient
    int expX;      // Exponent of x
    int expY;      // Exponent of y
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int coeff, int expX, int expY) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->coeff = coeff;
    newNode->expX = expX;
    newNode->expY = expY;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a term into the polynomial
void insertTerm(Node** head, int coeff, int expX, int expY) {
    Node* newNode = createNode(coeff, expX, expY);
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

// Function to display a polynomial
void displayPolynomial(Node* head) {
    if (head == NULL) {
        printf("0\n");
        return;
    }
    while (head != NULL) {
        printf("%d*x^%d*y^%d", head->coeff, head->expX, head->expY);
        head = head->next;
        if (head != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

// Function to add two polynomials
Node* addPolynomials(Node* poly1, Node* poly2) {
    Node* result = NULL;

    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->expX == poly2->expX && poly1->expY == poly2->expY) {
            int sumCoeff = poly1->coeff + poly2->coeff;
            if (sumCoeff != 0) {
                insertTerm(&result, sumCoeff, poly1->expX, poly1->expY);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        } else if ((poly1->expX > poly2->expX) || 
                  (poly1->expX == poly2->expX && poly1->expY > poly2->expY)) {
            insertTerm(&result, poly1->coeff, poly1->expX, poly1->expY);
            poly1 = poly1->next;
        } else {
            insertTerm(&result, poly2->coeff, poly2->expX, poly2->expY);
            poly2 = poly2->next;
        }
    }

    // Add remaining terms of poly1
    while (poly1 != NULL) {
        insertTerm(&result, poly1->coeff, poly1->expX, poly1->expY);
        poly1 = poly1->next;
    }

    // Add remaining terms of poly2
    while (poly2 != NULL) {
        insertTerm(&result, poly2->coeff, poly2->expX, poly2->expY);
        poly2 = poly2->next;
    }

    return result;
}

// Main function
int main() {
    Node* poly1 = NULL;
    Node* poly2 = NULL;

    // Create first polynomial: 3*x^2*y^1 + 4*x^1*y^2 + 5
    insertTerm(&poly1, 3, 2, 1);
    insertTerm(&poly1, 4, 1, 2);
    insertTerm(&poly1, 5, 0, 0);
    printf("First Polynomial: ");
    displayPolynomial(poly1);

    // Create second polynomial: 5*x^2*y^1 + 2*x^0*y^2 + 3*x^1*y^2
    insertTerm(&poly2, 5, 2, 1);
    insertTerm(&poly2, 2, 0, 2);
    insertTerm(&poly2, 3, 1, 2);
    printf("Second Polynomial: ");
    displayPolynomial(poly2);

    // Add the two polynomials
    Node* result = addPolynomials(poly1, poly2);
    printf("Resultant Polynomial after Addition: ");
    displayPolynomial(result);

    return 0;
}