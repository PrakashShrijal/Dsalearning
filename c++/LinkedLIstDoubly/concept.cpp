#include <iostream>
using namespace std;
// Manual implementation of doubly Linked list.
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
void display(Node *head)
{
    //    Node* temp = head;
    //    while (temp)
    while (head)
    {
        cout << head->val << " ";
        //head = head->next;
        head = head->prev;
    }

    cout << endl;
}
void display1(Node *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
       
    }

    cout << endl;
}

int main()
{
    // 10 20  30 40 50 60 70 80
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *f = new Node(60);

    a->next = b;
    // a->prev = NULL;    default ..........
    b->next = c;
    b->prev = a;
    c->next = d;
    c->prev = b;
    d->next = e;
    d->prev = c;
    e->next = f;
    e->prev = d;
    // f->next = NULL;  default...............
    f->prev = e;
    cout<<"Forward traversing.... using next pointer..........."<<endl;
    display1(a);
    cout<<"reverse travsing using prev pointer........."<<endl;
    display(f);
    return 0;
}