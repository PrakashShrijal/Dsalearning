#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(10);
    cout<<dq.front();
return 0;
}