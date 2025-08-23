#include<bits/stdc++.h>
using namespace std;
void selectionSort(int *arr, int n){
    
    for (int i = 0; i < n-1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        if(minIdx != i){
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
          
    }
    
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
       int n;
    cout<<"Enter the number in the array:";
    cin>>n;
    int arr[n];
  
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

   display(arr,n);
   selectionSort(arr,n);
   display(arr,n); 
return 0;
}