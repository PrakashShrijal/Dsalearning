//Given an array remove the 1 from it use recursion.
#include<bits/stdc++.h>
using namespace std;

int removeOnes(int arr[], int n, int i, int j){
    if(i == n) return j;
    if(arr[i] != 1){
        arr[j] = arr[i];
        return removeOnes(arr, n ,i+1, j+1);
    }
    return removeOnes(arr,n,i+1, j);
}
// returning the size of the new array and at same time removing the required element.
void print(int arr[], int n, int i, int j){
    
}
int main()
{
    int arr[] = {1,2,5,7,8,1,6,1,1,4,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = 0;
    int newsize = removeOnes(arr,n,i,j);

    for (int i = 0; i < newsize; i++)
    {
        cout<<arr[i]<<" ";
    }
    

return 0;
} 