// Q. Push the zeroes to the end while maintaining the relative order of the other element............
// 5 0 2 5 0 0 6 3 2 
// ans  -  5 2 5 6 3 2 0 0 0 .
#include<bits/stdc++.h>
using namespace std;
void sortrelative(int *arr,int n){
    for (int i = 0; i < n-1; i++)
    {     bool flag = true;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j] == 0){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            flag = false;
         }

        }
        if(flag == true)
       break;
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
    int arr[] = {5,0,2,5,0,0,6,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    display(arr,n);
    sortrelative(arr,n);
    display(arr,n);


return 0;
}