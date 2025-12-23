#include<bits/stdc++.h>
using namespace std;

vector<int> firstNeagativeInWindow(int arr[], int n, int k){  // modofied TC O(n)
    vector<int>result;
    queue<int>q;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < 0) q.push(i);
        if(i >= k-1){
            while (!q.empty() && q.front() < i-k+1)
            {
                q.pop();
            }
            if(!q.empty())
            result.push_back(arr[q.front()]);
            else
            result.push_back(-1);
        }
    }
    return result;
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
     v = firstNeagativeInWindow(arr,n,k);
    for (int i = 0; i < s; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
/*
“We maintain a queue of indices of negative elements. For each window,
 we remove expired indices and the front of the queue gives the first 
 negative index, achieving O(n) time.”
*/
return 0;
}