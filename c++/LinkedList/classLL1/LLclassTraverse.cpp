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
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    int getAtIdx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "Invalid size";
            return -1;
        }
        else if (idx == 0)
        {
            return head->val;
        }
        else if (idx == size - 1)
        {
            return tail->val;
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
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
};

int main()
{
    LinkedList ll;
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.insertAtTail(60);
    ll.insertAtTail(70);
    ll.insertAtTail(70);
    ll.insertAtTail(80);
    ll.insertAtTail(90);
    ll.insertAtTail(200);
    ll.insertAtTail(2);
    ll.display();
cout<<endl;
    cout<<ll.getAtIdx(2)<<" ";
   cout<< ll.getAtIdx(5)<<" ";
   cout<< ll.getAtIdx(10);
cout<< ll.getAtIdx(11);

    return 0;
}