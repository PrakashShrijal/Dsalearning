#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int si, int ei){
    int pivotelement = arr[(si+ei)/2];
    int count = 0;
    for(int i = si; i <=ei; i++){
        if(i == (si + ei)/2) continue;
        if(arr[i] <= pivotelement) count++;
    }
    int pivotIdx = count + si;
    swap(arr[(si+ei)/2], arr[pivotIdx]);
    int i = si;
    int j = ei;
    while (i<pivotIdx &&  j>pivotIdx)
    {
        if(arr[i] <= pivotIdx) i++;
        if(arr[j] > pivotelement) j--;
        else if(arr[i]>pivotelement && arr[j]<=pivotelement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
    
}

void quicksort(int arr[], int si, int ei){
    if(si>=ei) return;
    int pi = partition(arr, si, ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}

int main()
{
return 0;
}