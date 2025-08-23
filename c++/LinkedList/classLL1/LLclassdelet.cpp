#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void deleteAtHead()  // deleting at head
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail()   // deleting from tail
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        else
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;

            size--;
        }
    }

    void deleteAtIdx(int idx){
        if(idx < 0 || idx >= size)
        {cout<<"Invalid index";
        return;}
        else if(idx == 0 )
       { return deleteAtHead();}
        else if(idx == size-1)
        {return deleteAtTail();}
        else{
            Node* temp = head;
            for(int i = 1; i< idx; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
};
int main()
{

    LinkedList ll;
    ll.insertAtHead(90);
    ll.insertAtHead(40);
    ll.insertAtHead(70);
    ll.insertAtHead(80);
    ll.insertAtHead(40);
    ll.insertAtHead(30);

    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
    return 0;
}