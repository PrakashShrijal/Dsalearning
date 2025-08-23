// to reverse  printing of the Queue using stack
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int> &q){
    int n = q.size();
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        
        s.push(q.front());
        q.pop();
    }
    while (s.size() != 0)
    {
        q.push(s.top());
        s.pop();

    }
}
void dispaly(queue<int>&q){
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
    
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(19);
    q.push(20);
    q.push(40);
    q.push(50);
    q.push(60);
    dispaly(q);
    reverse(q);
    dispaly(q);
    reverse(q);
    dispaly(q);
return 0;
}