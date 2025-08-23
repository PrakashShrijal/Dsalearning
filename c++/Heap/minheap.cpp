#include<bits/stdc++.h>
using namespace std;
int main()
{

    // we use quque STL in the c++ 
    priority_queue<int, vector<int>, greater<int>>pq;  // min  heap.........................
    pq.push(12);
    pq.push(92);
    pq.push(57);
    pq.push(233);
    pq.push(65);
    pq.push(56);
    pq.push(13);
    cout<<pq.top()<<endl;  // always  takes min element in the queue.
    pq.pop();
    cout<<pq.top()<<endl;





return 0;
}