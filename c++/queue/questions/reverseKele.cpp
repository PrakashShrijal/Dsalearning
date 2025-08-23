//Q reverse the K elements of a queue
#include<iostream>
#include<queue>
#include<stack>
using namespace std; 

void revereseKEle(queue<int>& q, int k){
    int x = q.size();
    stack<int> s;
    if (q.empty() || k <= 0 || k > q.size()) {
        return; // Invalid case, do nothing
    }
  for(int i = 0; i < k ; i++)
    {
        s.push(q.front());
        q.pop();
    }
   
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    for(int i = 0; i < x-k; i++)
    {
        int p = q.front();
        q.pop();
        q.push(p);
    }
    
    
    
    

    
    

}
int main()
{
    queue<int> q;
    q.push(10);
    int n;
    int k;

    cout<<"Enter the number of element to be pushed into queue:";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    // while(!q.empty())    here the queue becomes empty.............
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();

    // }
    // cout<<endl;


        for(int i = 0; i < q.size() ; i++)
        {   int x = q.front();
            cout<<x<<" ";
            q.pop();
            q.push(x);
    
        }
        cout<<endl;
        cout<<"Enter the number of element to be reversed :";
        cin>>k;
        revereseKEle(q,k);
        for(int i = 0; i < q.size() ; i++)
        {   int x = q.front();
            cout<<x<<" ";
            q.pop();
            q.push(x);
    
        }


return 0;
}