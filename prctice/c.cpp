// mergesort

#include<bits/stdc++.h>
using namespace std;


void merge(int arr1[], int n1, int arr2[], int n2,int result[], int n){
    int i = 0;
    int j = 0;
    int k = 0;
    n = n1 + n2;
    while (i<n1 && j < n2)
    {
        if(arr1[i] <= arr2[j]) result[k++] = arr1[i++];
        else result[k++] = arr2[j++];
    }
    while (i < n1)
    {
        result[k++] = arr1[i++];

    }
    while (j < n2)
    {
        result[k++] = arr2[j++];
    }
    
    
}

void mergeSort(int arr[], int n){
    if(n == 1) return;
    int n1 = n/2;
    int n2 = n - n/2;
    int arr1[n1], arr2[n2];
    for(int i = 0; i< n1 ; i++){
        arr1[i] = arr[i];
    }
    for(int i = 0; i < n2; i++){
        arr2[i] = arr[i+n1];
    }
    mergeSort(arr1, n1);
    mergeSort(arr2, n2);
    merge(arr1,n1, arr2,n2,arr,n);
}
void display(int arr[], int n){
    
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
       
    }
    cout<<endl;
}

int main()
{

    int arr[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    display(arr,n);
    mergeSort(arr,n);
      display(arr,n);
return 0;
}