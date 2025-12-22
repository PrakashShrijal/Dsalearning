//first negative number in every window of aize K.
#include<bits/stdc++.h>
using namespace std;

vector<int> negativeWindow(int arr[], int n, int k){  // T.C = O(n*k)
    vector<int>v(n-k+1);
    for (int i = 0; i <= n-k; i++)
    {
        for (int j = i; j < k+i; j++)
        {
        if(arr[j] < 0){
            v[i] = arr[j];
            break;
        }
            
        }
        
    }
    return v;
}
int main()
{
    int arr[] ={2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int k;
    cout<<"Enter the window size:";
    cin>>k;
    int s = n-k+1;
    vector<int>v(s);
    v = negativeWindow(arr,n,k);
    for (int i = 0; i < s; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
return 0;
}