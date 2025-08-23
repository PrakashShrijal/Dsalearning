#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{ 
    int arr[] = {5,1,2,4,3};
    int n = 5;
    display(arr,n);
   //    cycle sort
   int i = 0;
   while (i<n)
   {
        int correctIdx = arr[i] -1;
        if(i== correctIdx)i++;
        else swap(arr[i],arr[correctIdx]);
   }
   
    display(arr,n);
    
return 0;
}