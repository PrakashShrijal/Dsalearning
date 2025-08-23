#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"all sub array are" <<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<<arr[k];

            }
            cout<<endl;
        }
        
    }
    
return 0;
}