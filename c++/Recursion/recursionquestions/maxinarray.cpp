// Find the max element in the array.
#include<bits/stdc++.h>
using namespace std;

void maxin(int arr[], int n,int i, int max){
    if(i==n){
        cout<<max;
        return;
    }
    if(max< arr[i]) max = arr[i];
    maxin(arr,n,i+1,max);
}
int print(int arr[], int n, int i){
    if (i == n-1) return arr[i];
    int m = print(arr,n,i+1);
    return  max(arr[i],m);
}   

int main()
{
    int arr[] = {1,3,4,32,3243,2,124,3,4,677,545,6,675,46,};
    int n = sizeof(arr)/sizeof(arr[0]);
   // maxin(arr,n,0,INT_MIN);
   cout<<print(arr,n,0);

return 0;
}