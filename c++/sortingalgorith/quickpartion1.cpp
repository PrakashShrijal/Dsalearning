#include<bits/stdc++.h>
using namespace std;

//Hoare Partition Scheme
int partitionHoare(int arr[], int si, int ei) {
    int pivot = arr[si];  
    int i = si - 1, j = ei + 1;

    while (true) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j) return j;  // final pivot position

        swap(arr[i], arr[j]);
    }
}

void quicksort(int arr[], int si, int ei) {
    if (si < ei) {
        int pi = partitionHoare(arr, si, ei);
        quicksort(arr, si, pi);
        quicksort(arr, pi + 1, ei);
    }
}

int main()
{
        int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}