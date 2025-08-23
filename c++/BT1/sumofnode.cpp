#include<iostream>
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
void dispalyTree(Node* root){
    if (root == NULL)
        return;
        cout<<root->val<<" ";
    
   
    dispalyTree(root->right);
    dispalyTree(root->left);
    
}

int sumNode(Node* root){
    if (root == NULL)
        return 0;
        
    return root->val + sumNode(root->left) + sumNode(root->right);    
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
    dispalyTree(a);
    cout<<sumNode(a);
    cout<<endl;
    cout<<sumNode(b);

  return 0;
}