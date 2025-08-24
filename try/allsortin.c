#include<stdio.h>
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf(\n);
}
//bubble sort
void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
}

//insertion sort
void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j= i-1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;  
    }
    
}
// Quick sort
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low -1);
    for (int  j = low ; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] =  temp;
        }
        
    }
    int temp = arr[i+1];
    arr[i+1] = arr[j];
    arr[high] = temp;

    return (i+1);
}
void quickSort(int arr[], int low, int high){
    if (low< high)
    {
        int pi = partition(arr,;low,high)
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
    
}