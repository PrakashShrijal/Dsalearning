#include <iostream>
using namespace std;
class Node
{ // Linked list node
   public :
   int val;
   Node* next;
   Node(int val){
    this->val = val;
    this->next = NULL;
   }

};

// to find size
int size(Node* head){
    int n = 0;
    while(head != NULL){
        n++;
        head = head->next;
    }
    return n;
}
void dispaly(Node* head){
    Node* temp = head;
    while(temp != NULL){
    cout<<temp->val<<" ";
    temp = temp->next;
    }
    cout<<endl;
}
    void dispaly1(Node* head){  // eliminating temp
    while(head != NULL){
    cout<<head->val<<" ";
    head= head->next;
    }
    cout<<endl;
}
 int main()
{
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
   // cout<<a->next->next->next->val;
    
    // Node* temp = a;
    // while(temp != NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }

    dispaly1(a);
    cout<<size(a);
    return 0;
}