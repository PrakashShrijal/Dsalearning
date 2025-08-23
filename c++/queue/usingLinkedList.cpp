#include<iostream>
using namespace std;
class Node{  // user defined data type
    public :
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Queue{  // user defined data structure

     public :
     Node* head;
     Node* tail;
     int size;
     Queue(){
        head = tail = NULL;
        size = 0;
     }
        void push(int val){
        Node* temp = new Node(val);
        if(size == 0)head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
     }
     void pop()  // deleting at head
     {
         if (size == 0)
         {
             cout << "Queue is Empty!"<<endl;
             return;
         }
         Node * temp = head;
         head = head->next;
         size--;
         delete(temp);
     }
     int front(){
        
        if(size == 0){
            cout<<"queue is empty!"<<endl;
            return -1;
        }
        return tail->val;
        
     }
     int back(){
        
        if(size == 0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return head->val;
     }
     void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
     }

};
int main()
{
    Queue q;
    // push  //pop //front ->top //size, empt //back
    q.push(10);
    q.push(19);
    q.push(20);
    q.push(40);
    q.push(50);
    q.push(60);
    cout << q.front() << endl;
    cout << q.back();
    q.pop();
    cout << "\n"
         << q.front() << endl;
    q.display();
return 0;
}