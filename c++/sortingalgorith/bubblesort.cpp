#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int  n){  // TC O(n^2);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
           if(arr[j] > arr[j+1]){
            //swap(arr[j],arr[j+!]);
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp; 
           }
        }
        
    }
    

}
void bubblesort1(int *arr,int  n){  // more optimized in terms of iteration... in best case O(n)..
    for (int i = 0; i < n-1; i++)
    {    bool flag = true;
        for (int j = 0; j < n-i-1; j++)
        {
           if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp; 
            flag = false;
           }
          
           }
            if(flag == true){ // swap didnt  happen........
            break;
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
   
    
    bubblesort1(arr,n);
    cout<<"Sorted array is ";
    display(arr,n);

return 0;
}