// find the kth smallest element int the array.........
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    vector<int> v;
    int n;
    cout<<"enter the number in the array :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
     int k;
    cout<<"enter the number in the array :";
    cin>>k;
    for (int i = 0; i < n-k; i++)
    {
      pq.push(v[i]);
      if(pq.size() > k) pq.pop();
    }
    cout<<pq.top();
    


return 0;
}