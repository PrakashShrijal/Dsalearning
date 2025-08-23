#include<bits/stdc++.h>
using namespace std;

void pushAtBottom(stack<int>&st,int val){
    stack<int> temp;
    while (st.size() > 0)
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while (temp.size()> 0)
    {
        st.push(temp.top());
        temp.pop();
    }
}

void pushAtIdx(stack<int>&st, int idx, int val){
    stack<int> temp;
    while (st.size() > idx)
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while (temp.size() > 0)
    {
        st.push(temp.top());
        temp.pop();
    }
    
    
}
void printStack(stack<int> st){
    stack<int> temp;
    while (st.size() > 0)
    {
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() > 0)
    {
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
    
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    printStack(st);
    pushAtBottom(st,30);
    printStack(st);
    pushAtIdx(st,6,20);
    printStack(st);
return 0;
}