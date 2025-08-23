#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    public :
    int f;
    int b;
    int s;
    vector<int> arr;
    CircularQueue(int val){
        f = 0;
        b = 0;
        s = 0;
        arr.resize(val);
    }
    void push(int val){
        if(s == arr.size()){ 
        cout<<"Circular Queue is full!"<<endl;
        return;
        }
        arr[b] = val;
        b = (b+1) % arr.size();
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Circular Queue is Empty!"<<endl;
            return;
        }
        f = (f+1) % arr.size();
        s--;
        cout<<"Element is Popped!"<<endl;
    }
    int front(){
        if(s==0){
            cout<<"Circular Queue is Empty!"<<endl;
            return -1;
        }
        arr[f];
    }
    int rear(){
        if(s==0){
            cout<<"Circular Queue is Empty!"<<endl;
            return -1;
        }
        int rearIdx = (b-1 + arr.size()) % arr.size();
        return arr[rearIdx];
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0)
        return true;
        else{
            return false;
        }
    }
    void display(){
        if(s==0){
            cout<<"CircularQueue is empty!"<<endl;
            return;
        }
        int temp = f;

        for (int i = 0; i < s; i++)
        {
            cout<<arr[temp]<<" ";
            temp = (temp+1) % arr.size();
        }
        cout<<endl;
        
    }
};
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    CircularQueue q(n);
    q.push(10);
    q.push(19);
    q.push(20);
    q.push(40);
    q.push(50);
    q.display();
    cout<<endl;
    q.push(60);
    q.display();
    cout<<endl;
    cout<<q.size()<<endl;
    
    cout<<q.empty()<<endl;
    q.pop();
    q.pop();
    q.push(60);
    q.display();
    cout<<endl;
    q.rear();  
    cout<<endl;
    q.front(); 
    q.pop();
    q.pop();
    q.pop();
    q.display();
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.empty()<<endl;

return 0;
}