#include <stdio.h>
#include <stdlib.h>

// Function to merge two sorted subarrays
void merge(int a[], int n1, int b[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j])  // <= makes it stable
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }
    while (i < n1) result[k++] = a[i++];
    while (j < n2) result[k++] = b[j++];
}

// Recursive merge sort
void mergesort(int v[], int n) {
    if (n == 1) return;

    int n1 = n / 2;
    int n2 = n - n1;

    int *a = (int*)malloc(n1 * sizeof(int));
    int *b = (int*)malloc(n2 * sizeof(int));

    // Copying elements
    for (int i = 0; i < n1; i++) a[i] = v[i];
    for (int i = 0; i < n2; i++) b[i] = v[i + n1];

    mergesort(a, n1);
    mergesort(b, n2);

    merge(a, n1, b, n2, v);

    free(a);
    free(b);
}

// Display function
void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *a = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    mergesort(a, n);

    printf("Sorted array: ");
    display(a, n);

    free(a);
    return 0;
}
