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
class Stack                
{
public:
    Node *head;
    int size;
    Stack()
    {
        head = NULL;
        size = 0;
    }
    void push(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop()
    {
        if (head == NULL)
            return;
        head = head->next;
        size--;
    }
    // void display1()
    // {
    //     while (head != NULL)
    //     {
    //         cout << head->val<<" ";
    //         head = head->next;
            
            
    //     }
    // }
    void print(Node* temp){
        if(temp== NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";
    }
    void display(){
        Node* temp = head;
        print(temp);
        cout<<endl;
    }
    int top(){
        if(head == NULL){
            cout<<"STACK IS EMPTY !"<<endl;
            return -1;
        }
        return head->val;
    }
};
int main()
{
    Stack st;
    st.push(120);
    st.push(100);
    st.push(108);
    st.push(109);
    st.push(103);
    st.push(102);
    st.push(101);
    st.display();
    cout << endl;
    cout << st.size<<endl;
    
 
   st.pop();
   cout<<st.top();
   st.push(1000);
   cout<<endl;
   st.display();
    return 0;
}