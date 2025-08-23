#include<iostream>
using namespace std;
int main()
{
    int p =1;
    int n;
    cout<<"Enter the element in array:";
    cin>>n;
    int arr[n];
    cout<<"enter the element in the array:";
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int  i = 0; i < n; i++)
    {
        p *= arr[i];
    }
    cout<<p;
    

return 0;
}