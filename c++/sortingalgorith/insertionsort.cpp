#include<bits/stdc++.h>
using namespace std;
void  insertionsort(int *arr, int n){// without use of global variable
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j>=1 && arr[j] < arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
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
    insertionsort(arr,n);
    display(arr,n);

return 0;
}