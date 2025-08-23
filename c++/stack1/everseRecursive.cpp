#include<iostream>
#include<stack>
using namespace std;

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
    return 0;
}