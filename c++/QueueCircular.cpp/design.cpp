// design of circular  Queue

#include<iostream>
#include<vector>                   
using namespace std;
class CircularQueue {
public :
int f;
int b;
int s;
vector<int> arr;
CircularQueue(int val){
    f = 0;
    b = 0;
    s = 0;
    vector<int> v(val);
    arr = v;  // arr pointing same memory location as as v point 
    //arr.resize(val);  can also be used.......
}
void push(int val ){
    if(s == arr.capacity()){
        cout<<"CircularQueue is full!"<<endl;
        return;
    }
    arr[b] = val;
    b++;
    if(b==arr.capacity()) b = 0; 
    s++;
    
}
void pop(){
    if(s == 0){
        cout<<"CircularQueue is empty!"<<endl;
        return ;
    }
    f++;
    if(f==arr.capacity()) f = 0;
    cout<<"Element is popped"<<endl;
    s--;
}
int front(){
    if(s == 0){
        cout<<"CircularQueue is Empty!"<<endl;
        return -1;
    }
    return arr[f];
}
int rear(){
    if(s == 0){
        cout<<"CircularQueue is Empty!"<<endl;
        return -1;
    }

    if(b == arr.capacity()) return arr[arr.capacity()-1];
    return arr[b-1];
}
int size(){
    return s;
}
bool empty(){
    if(s == 0)
    return true;
    else {
        return false;
    }
}
void display() {
    if (s == 0) {
        cout << "CircularQueue is Empty!" << endl;
        return;
    }

    int temp = f;
    for (int i = 0; i < s; i++) {
        cout << arr[temp] << " ";
        temp = (temp + 1) % arr.size();  // Circular increment
    }
    cout << endl;
}





};


int main()
{ int n;
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