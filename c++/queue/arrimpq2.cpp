// array  implementation of queue

#include<iostream>
#include<vector>
using namespace std;
class Queue {
public :
int f;
int b;
vector<int> arr;
Queue(int val){ // val is the size of the queue
    f = 0;
    b = 0;
    vector<int> v(val);
    arr = v;
}
void push(int val ){
    if(b==arr.size()){
        cout<<"queue is full!"<<endl;
        return;
    }
    arr[b] = val;
    b++;
}
void pop(){
    if(f-b == 0){
        cout<<"Queue is empty!"<<endl;
        return ;
    }
    f++;
}
int front(){
    if(f-b == 0){
        cout<<"Queue is Empty!"<<endl;
        return -1;
    }
    return arr[f];
}
int back(){
    if(f-b == 0){
        cout<<"Queue is Empty!"<<endl;
        return -1;
    }
    return arr[b-1];
}
int size(){
    return b-f;
}
bool empty(){
    if(f-b == 0)
    return true;
    else {
        return false;
    }
}
void display(){
    if(f-b == 0){
        cout<<"Queue is Empty!"<<endl;
        return;
     }
     int temp = f;
     while (temp-b != 0)
     {
        
        cout<<arr[temp]<<" ";
        temp++;
     }
     cout<<endl;
}


};


int main()
{ int n;
    cout<<"Enter the value of n:";
    cin>>n;
    Queue q(n);
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
    q.display();
    cout<<endl;
    q.back();
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