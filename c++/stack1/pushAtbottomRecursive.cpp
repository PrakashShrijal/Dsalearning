#include<iostream>
#include<stack>
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
void reversePush(stack<int>&st){
    if (st.size() == 1) return;
    {
        int x = st.top();
        st.pop();
        reversePush(st);
        pushAtBottom(st,x);
    }
    
}
void displayrec(stack<int> st){
    if (st.size() == 0) return;
   cout<<st.top()<<" ";
    int x = st.top();
    st.pop();
    displayrec(st);
    st.push(x);
    
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
   
    displayrec(st);
    cout<<endl;
    reversePush(st);
    displayrec(st);
    return 0;
}