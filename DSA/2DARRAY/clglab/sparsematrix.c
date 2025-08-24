

#include <stdio.h>
#define MAX 100

// Structure to represent a sparse matrix
typedef struct {
    int row;
    int col;
    int value;
} SparseMatrix;

// Function to read a sparse matrix
int readSparseMatrix(SparseMatrix matrix[]) {
    int rows, cols, nonZero = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int val;
            scanf("%d", &val);
            if (val != 0) {
                matrix[nonZero].row = i;
                matrix[nonZero].col = j;
                matrix[nonZero].value = val;
                nonZero++;
            }
        }
    }

    matrix[nonZero].row = rows;
    matrix[nonZero].col = cols;
    matrix[nonZero].value = nonZero;
    return nonZero;
}

// Function to print a sparse matrix
void printSparseMatrix(SparseMatrix matrix[], int size) {
    printf("\nSparse Matrix Representation (row, col, value):\n");
    for (int i = 0; i <= size; i++) {
        printf("(%d, %d, %d)\n", matrix[i].row, matrix[i].col, matrix[i].value);
    }
}

// Function to transpose a sparse matrix
int transposeSparseMatrix(SparseMatrix matrix[], SparseMatrix transpose[]) {
    int size = matrix[0].value; // Number of non-zero elements
    transpose[0].row = matrix[0].col;
    transpose[0].col = matrix[0].row;
    transpose[0].value = size;

    int index = 1;
    for (int col = 0; col < matrix[0].col; col++) {
        for (int i = 1; i <= size; i++) {
            if (matrix[i].col == col) {
                transpose[index].row = matrix[i].col;
                transpose[index].col = matrix[i].row;
                transpose[index].value = matrix[i].value;
                index++;
            }
        }
    }
    return size;
}

// Function to add two sparse matrices
int addSparseMatrices(SparseMatrix mat1[], SparseMatrix mat2[], SparseMatrix result[]) {
    if (mat1[0].row != mat2[0].row || mat1[0].col != mat2[0].col) {
        printf("Matrix dimensions do not match for addition.\n");
        return -1;
    }

    int i = 1, j = 1, k = 1;
    int size1 = mat1[0].value, size2 = mat2[0].value;

    result[0].row = mat1[0].row;
    result[0].col = mat1[0].col;

    while (i <= size1 && j <= size2) {
        if (mat1[i].row == mat2[j].row && mat1[i].col == mat2[j].col) {
            result[k].row = mat1[i].row;
            result[k].col = mat1[i].col;
            result[k].value = mat1[i].value + mat2[j].value;
            i++;
            j++;
            k++;
        } else if (mat1[i].row < mat2[j].row || 
                  (mat1[i].row == mat2[j].row && mat1[i].col < mat2[j].col)) {
            result[k++] = mat1[i++];
        } else {
            result[k++] = mat2[j++];
        }
    }

    while (i <= size1) {
        result[k++] = mat1[i++];
    }

    while (j <= size2) {
        result[k++] = mat2[j++];
    }

    result[0].value = k - 1;
    return k - 1;
}

// Main Function
int main() {
    SparseMatrix mat1[MAX], mat2[MAX], result[MAX], transpose[MAX];
    int size1, size2, resultSize;

    // Input and display the first matrix
    printf("Enter the first matrix:\n");
    size1 = readSparseMatrix(mat1);
    printSparseMatrix(mat1, size1);

    // Input and display the second matrix
    printf("\nEnter the second matrix:\n");
    size2 = readSparseMatrix(mat2);
    printSparseMatrix(mat2, size2);

    // Add matrices
    printf("\nAdding the two matrices...\n");
    resultSize = addSparseMatrices(mat1, mat2, result);
    if (resultSize != -1) {
        printSparseMatrix(result, resultSize);
    }

    // Transpose the first matrix
    printf("\nTransposing the first matrix...\n");
    transposeSparseMatrix(mat1, transpose);
    printSparseMatrix(transpose, size1);

    return 0;
}