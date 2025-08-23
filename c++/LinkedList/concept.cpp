#include<iostream>
using namespace std;
class Node{  // linked list node
    public :
    int val;
    Node* next;
    // constructor
    Node(int val ){ 
        this->val = val;
        this->next = NULL; // no need to put next in const. parameter
        // making all nodes store null in their pointer.
    }
};
int main()
{
    // 10 20 30 40  (making without constructor.)
    // Node a;
    // a.val = 10;
    // Node b;
    // b.val = 20;
    // Node c;
    // c.val = 30;
    // Node d;
    // d.val = 40;
    Node a(10);  //use of constuctor.
    Node b(20);
    Node c(30);
    Node d(40);
    // forming 
    a.next = &b;
    b.next = &c;
    c.next = &d;
  //   d.next = NULL; //( no need when initilized with constuctor.)
  //  cout<<b.val;
  //  a.next->val = 50;
  //  cout<<a.next->val<<endl;
  //  cout<<b.next->val<<endl;  // accss c from b
  //  // accessing c from a
  //  cout<<a.next->next->val<<endl;
  //  cout<<a.next->next->next->val; //access of d from a
  //  //*(*(*(a.next).next).next).val == 40

   // printing linked list.
 Node temp = a;
  //  while (temp.next != NULL)
  //  {
  //   cout<<temp.val<<" ";
  //   temp = *(temp.next);
  //  }
  // above problem was that  last node was printing.
   
while (1)
{
    cout<<temp.val<<" ";
    if(temp.next == NULL)
    break;
     temp = *(temp.next);
}

return 0;
}