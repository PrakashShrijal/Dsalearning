//#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;
    // st.top();
        // // printing stack in reverse order..........->empty the stck...
        // while (st.size()>0)
        // {
        //     cout<<st.top()<<endl;
        //     st.pop();
        // }
// we will use extra stack
        stack<int> temp;
      while (st.size()>0)
        {
            cout<<st.top()<<endl;
            //int x = st.top();
            temp.push(st.top());
            st.pop();
            //temp.push(x);
        }
        //putting element back from temp to st
        while (temp.size()>0)
        {
            int x = temp.top();
            temp.pop();
            st.push(x);
        }
        cout<<endl<<st.top();
        

return 0;
}