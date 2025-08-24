

#include <stdio.h>

#define MAX_TERMS 100

// Structure to represent a term in the polynomial
typedef struct {
    int coeff; // Coefficient
    int x_pow; // Power of x
    int y_pow; // Power of y
} Term;

// Function to read a polynomial
int readPolynomial(Term poly[]) {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter term %d (coeff x_pow y_pow): ", i + 1);
        scanf("%d %d %d", &poly[i].coeff, &poly[i].x_pow, &poly[i].y_pow);
    }
    return n;
}

// Function to print a polynomial
void printPolynomial(Term poly[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d*x^%d*y^%d", poly[i].coeff, poly[i].x_pow, poly[i].y_pow);
        if (i < n - 1) {
            printf(" + ");
        }
    }
    printf("\n");
}

// Function to add two polynomials
int addPolynomials(Term poly1[], int n1, Term poly2[], int n2, Term result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        // If powers match, add coefficients
        if (poly1[i].x_pow == poly2[j].x_pow && poly1[i].y_pow == poly2[j].y_pow) {
            result[k].coeff = poly1[i].coeff + poly2[j].coeff;
            result[k].x_pow = poly1[i].x_pow;
            result[k].y_pow = poly1[i].y_pow;
            i++;
            j++;
        }
        // If poly1's term is larger, add it to result
        else if (poly1[i].x_pow > poly2[j].x_pow ||
                 (poly1[i].x_pow == poly2[j].x_pow && poly1[i].y_pow > poly2[j].y_pow)) {
            result[k] = poly1[i];
            i++;
        }
        // If poly2's term is larger, add it to result
        else {
            result[k] = poly2[j];
            j++;
        }
        k++;
    }

    // Add remaining terms of poly1
    while (i < n1) {
        result[k++] = poly1[i++];
    }

    // Add remaining terms of poly2
    while (j < n2) {
        result[k++] = poly2[j++];
    }

    return k;
}

// Main function
int main() {
    Term poly1[MAX_TERMS], poly2[MAX_TERMS], result[MAX_TERMS];
    int n1, n2, n3;

    // Read the first polynomial
    printf("Enter the first polynomial:\n");
    n1 = readPolynomial(poly1);

    // Read the second polynomial
    printf("Enter the second polynomial:\n");
    n2 = readPolynomial(poly2);

    // Add the polynomials
    n3 = addPolynomials(poly1, n1, poly2, n2, result);

    // Print the result
    printf("The resulting polynomial is:\n");
    printPolynomial(result, n3);

    return 0;
}