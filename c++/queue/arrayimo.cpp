// array  implementation of queue

#include<iostream>
using namespace std;
class Queue {
public :
int f;
int b;
int arr[5];
Queue(){
    f = 0;
    b = 0;
}
void push(int val ){
    if(b==5){
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
    return arr[b-1];  // since b pointer will move out of the array here....... so b-1
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
{
    Queue q;  // what if we want to set the size of the queue here only, how? ans arrimpq2.cpp
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