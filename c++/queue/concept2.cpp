/*
Q. Remove all the element present at even position in queue. connsider 0-based indexing.
 */

#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void dispaly(queue<int> &q)
{
    int n = q.size(); // why this -> because if we put in iteration then size is dec. everytime here....
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
}
void remEveELe(queue<int> &q) // find better way no use of stack
{
    int n = q.size();
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            q.pop();
        }
        else
        {
            int x = q.front();
            s.push(x);
            q.pop();
        }
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}
// better way to
void removeAtEven(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            q.pop();
        else
        {
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}
void removeAtEven1(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            int x = q.front();
            q.push(x);
        }
        q.pop();
    }
   
}

int main()
{
    queue<int> q;
    // push  //pop //front ->top //size, empt //back
    q.push(10);
    q.push(19);
    q.push(20);
    q.push(40);
    q.push(50);
    q.push(60);
    cout << q.front() << endl;
    cout << q.back();
    q.pop();
    cout << "\n"
         << q.front() << endl;
    dispaly(q);
    removeAtEven1(q);
  // removeAtEven(q);
    cout << endl;
    dispaly(q);
    cout << endl;
    dispaly(q);
}