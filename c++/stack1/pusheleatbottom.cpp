#include<iostream>
#include<stack>
using namespace std;
int main(){
    //insert element as bottom of the stack///
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> temp;
    while (st.size() > 0)
    {   cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    st.push(60);
    while (temp.size()>0)
    {
        st.push(temp.top());
        temp.pop();
    }
    while (st.size() > 0)
    {   cout<<endl<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    
    
}