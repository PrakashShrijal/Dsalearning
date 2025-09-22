#include<bits/stdc++.h>
using namespace std;
//Lomuto Partition Scheme
int partitionLomuto(int arr[], int si, int ei) {
    int pivot = arr[ei];    // choose last element
    int i = si - 1;

    for (int j = si; j < ei; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[ei]); // place pivot in correct position
    return i + 1;
}

void quicksort(int arr[], int si, int ei) {
    if (si >= ei) return;
    int pi = partitionLomuto(arr, si, ei);
    quicksort(arr, si, pi - 1);
    quicksort(arr, pi + 1, ei);
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