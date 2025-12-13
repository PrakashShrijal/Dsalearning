/*    Print all the elements of an array in reverse order.
*/
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){
    if(n<=0) return;
    reverseArray(arr+1,n-1);
    cout<<arr[0]<<" ";
}

void reverse2(int arr[], int n){
    if(n < 0) return;
    cout<<arr[n]<<" ";
    reverse2(arr, n-1);
}

int main()
{
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    cout<<"Enetr the elements in the array:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    reverse2(arr,n-1);
    

return 0;
}