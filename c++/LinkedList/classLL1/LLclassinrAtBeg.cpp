#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
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
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    insertAtIdx(int idx, int val){
        if(idx<0 || idx > size) cout<<"Invalid index cannot insert";
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else{
            Node* temp = new Node(val);
            Node* temp1 = head;
            
            for(int i = 1; i<= idx-1; i++){
                temp1 = temp1->next;
            }
            temp->next = temp1->next;
            temp1->next = temp;
            size++;
        }
        
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
    ll.insertAtHead(50);
    ll.insertAtTail(60);
     ll.insertAtTail(40);
    ll.display();
    ll.insertAtIdx(2,50);
    ll.display();
    ll.insertAtIdx(1,50);
    ll.insertAtHead(90);
    
    ll.display();
    ll.insertAtIdx(2,80);
    ll.display();
   

    cout<<ll.size;
return 0;
}