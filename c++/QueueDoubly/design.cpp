// design Deque  using doubly linked list... 


#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Deque
{
public:
    Node *head;
    Node *tail;
    int size;
    Deque(){
        head = tail = NULL;
        size = 0;
    }
    void pushback(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void pushFront(int val){
        Node* temp = new Node(val);
        if (size == 0)
        {
            head = tail = NULL;
        }else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
        
    }
    void popFront(){
        if(size == 0){
            cout<<"Deque is Empty";
            return;
        }
        head = head->next;
        if(head) head->prev = NULL;
        if(head == NULL) tail = NULL;
        size--;
    }
    void popBack(){
        if(size == 0) {
            cout<<"Deque is Empty";
            return;
        }else if(size == 1){
            popFront();
            return;
        }
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    int front(){
        if(size==0){
            cout<<"Deque is Empty!"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size == 0){
            cout<<"Deque is empty!"<<endl;
            return -1;
        }
        return tail->val;
    }
    int sizee(){
        return size;
    }
    bool empty(){
        if(size == 0) return true;
        else return false;
    }
    void display(){
        if(size == 0){
            cout<<"Deque is empty!";
            return;
        }
        Node * temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    Deque dq;
    dq.pushback(10);
    dq.pushback(30);
    dq.pushback(40);
    dq.pushback(50);
    dq.pushFront(80);
    dq.pushFront(90);
    dq.display();
    cout<<dq.sizee()<<endl;
    cout<<dq.empty()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    dq.popBack();
    dq.popFront();
    dq.display();


    
    
    return 0;
}