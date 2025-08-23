#include<iostream>
#include<queue>
using namespace std;
void dispaly(queue<int>& q){
    int n = q.size();
    for (int  i = 0; i < n; i++)
    {
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    
}

// reverse queue using stack.................
int main(){
    queue<int> q;
    //push  //pop //front ->top //size, empt //back
    q.push(10);
    q.push(19);
    q.push(20);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<q.front()<<endl;
    cout<<q.back();
    q.pop();
    cout<<"\n"<<q.front()<<endl;
    dispaly(q);
}