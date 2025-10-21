// Quicksort
#include<stdio.h>

//Function to swap two elements
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// partition function
int partition(int arr[], int si, int ei){
    int pivotelement = arr[(si+ei)/2];
    int count = 0;

    // count how many element are <= pivot
    for (int i = si; i < ei; i++)
    {
        if(i == (si + ei) / 2) continue;
        if (arr[i] <= pivotelement)
        {
            count++;
        }
        int pivotIdx = count + si;
        swap(&arr[(si + si) / 2], &arr[pivotIdx]);
        int i = si;
        int j = ei;

        while (i < pivotIdx && j > pivotIdx)
        {
            if(arr[i] <= pivotelement) i++;
            else if(arr[j] > pivotelement) j--;
            else{
                swap(&arr[i] , &arr[j]);
                i++;
                j--;
            }
        }
        
       
    }
     return pivotIdx;
}