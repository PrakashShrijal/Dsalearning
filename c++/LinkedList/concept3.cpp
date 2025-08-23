#include <iostream>
using namespace std;
class Node
{ // Linked list node
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
// dispaly using recursion
void dispaly(Node *head)
{
    if (head == NULL)
        return;
    cout << head->val << " "; // work
    dispaly(head->next);      // call
}
// diaplay in reverse order
void dispaly1(Node *head)
{
    if (head == NULL)
        return;
    dispaly1(head->next);     // call
    cout << head->val << " "; // work
}
 void insertAtEnd(Node *head, int val)
{
    Node *t = new Node(val);
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = t;
}
Node *deletenode(Node *head, Node *target)
{   if(head == target){
    head = head->next;
    return head;
}
    Node *temp = head;
    while (temp->next != target)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    dispaly(a);
    cout << endl;
    cout<<"Reverse display using recursion "<<endl;
    dispaly1(a);
    cout << endl;
    insertAtEnd(a, 60);
    dispaly(a);
    deletenode(a, d);
    cout << endl;
    insertAtEnd(a, 100);
    dispaly(a);
    deletenode(a,c);
    cout << endl;
    dispaly(a);
    return 0;
}