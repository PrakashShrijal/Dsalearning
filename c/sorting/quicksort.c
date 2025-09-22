#include <stdio.h>

// Function to swap two elements
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Partition function
int partition(int arr[], int si, int ei) {
    int pivotelement = arr[(si + ei) / 2];
    int count = 0;

    // Count how many elements are <= pivot
    for (int i = si; i <= ei; i++) {
        if (i == (si + ei) / 2) continue;
        if (arr[i] <= pivotelement) count++;
    }

    int pivotIdx = count + si;
    swap(&arr[(si + ei) / 2], &arr[pivotIdx]);

    int i = si;
    int j = ei;

    while (i < pivotIdx && j > pivotIdx) {
        if (arr[i] <= pivotelement) i++;
        else if (arr[j] > pivotelement) j--;
        else {
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

// QuickSort recursive function
void quicksort(int arr[], int si, int ei) {
    if (si >= ei) return;
    int pi = partition(arr, si, ei);
    quicksort(arr, si, pi - 1);
    quicksort(arr, pi + 1, ei);
}

// Display function
void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: ");
    display(arr, n);

    quicksort(arr, 0, n - 1);

    printf("After sorting: ");
    display(arr, n);

    return 0;
}
