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
class LinkedList{  // user defined data structure
     public :
     Node* head;
     Node* tail;
     int size;
     LinkedList(){
        head = tail = NULL;
        size = 0;
     }
     void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

     void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size == 0)head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
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
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    cout<<"size is "<<ll.size<<endl;
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtHead(90);
    ll.display();
    cout<<"size is "<<ll.size<<endl;
return 0;
}
