#include <stdio.h>
#include <conio.h>

int linearSearch(int arr[], int l, int r, int key) {
    if (l > r)   // base case: not found
        return -1;
    if (arr[l] == key)  // base case: found
        return l;
    return linearSearch(arr, l + 1, r, key);  // recursive call
}

void main() {
    int arr[10], n, key, i, pos;

    clrscr();
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = linearSearch(arr, 0, n - 1, key);

    if (pos == -1)
        printf("\nElement not found");
    else
        printf("\nElement found at index %d", pos);

    getch();
}
