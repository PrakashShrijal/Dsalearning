/**
 *find the kth smallest element in the array using quick sort............quickselect. 
 */


#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int si , int ei){
    int pivotelement = arr[(si+ei)/2];
    int count = 0;
    for (int i = si; i <=ei; i++)
    {
        if(i==(si+ei)/2) continue;
        if(arr[i] <= pivotelement) count++;
    }
    int pivotIdx = count + si;
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    int i = si;
    int j = ei;
    while (i<pivotIdx && j>pivotIdx)
    {
        if(arr[i]<= pivotelement) i++;
        if(arr[j]>pivotelement) j--;
        else if (arr[i]>pivotelement && arr[j]<=pivotelement)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
        
    }
    return pivotIdx;
    
}

void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi = partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int kthsmallest(int arr[],int si,int ei, int k){
    int pi = partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1 <k) return  kthsmallest(arr,pi+1,ei,k);
    else   kthsmallest(arr,si,pi-1,k);
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
       cout<<endl;
    int k;
     cout<<"Enter the value of the k:";
    cin>>k;
 
    cout<<kthsmallest(arr,0,n-1,k);  // average case time complexity is O(n);
return 0;
}