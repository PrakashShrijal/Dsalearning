#include <iostream>
using namespace std;

class Stack
{
public:
    int arr[5];
    int idx;
    Stack()
    {
        idx = -1;
    }
    void push(int val){
        if (idx == 4)
        {
            cout<<"STACK IS FULL !";
            return;
        }
        idx++;
        arr[idx] = val;
        
    }

    void pop(){
        if(idx ==-1){
            cout<<"STACK IS EMPTY !";
            return ;
        }
        idx--;
    }
    int top(){
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};



int main()
{
    Stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size();
    st.pop();
    cout<<endl;
    cout<<st.size();


    return 0;
}