#include<bits/stdc++.h>
using namespace std;
class Node{  // TreeNode
    public :
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }
};

 Node* inorderPrede(Node* root){
    if(!root->left) return NULL;
    Node* prev = root->left;
    while (prev->right)
    {
        prev = prev->right;
    }
    return prev;
}
int main()
{
    Node* a = new Node(1);  // root node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
     
    
   Node* pred = inorderPrede(a);
    if (pred) {
        cout << "Inorder Predecessor of " << a->val << " is: " << pred->val << endl;
    } else {
        cout << "Inorder Predecessor does not exist.\n";
    }
return 0;
}