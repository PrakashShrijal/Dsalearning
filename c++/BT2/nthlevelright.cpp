// nth level printing from left to  right ..........

#include <bits/stdc++.h>
using namespace std;
class Node
{ // TreeNode
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }
};
int level(Node * root){
    if(root == NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}
void nthlevel(Node *root, int curr, int level)
{
    if (root == NULL)
        return;

    if(curr == level) {
        cout << root->val << " "; // work
        return;
    }// calling right  first to print level in right to left 
    nthlevel(root->right,curr+1,level); // call
    nthlevel(root->left,curr+1,level);  // call
   
}
void levelOrder(Node* root){
    int n = level(root);
    for (int i = 0; i < n; i++)
    {
        nthlevel(root,1,i);
        cout<<endl;
    }
    
}

int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    Node *h = new Node(8);
    Node *i = new Node(9);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    d->right = i;
     

    levelOrder(a);



    return 0;
}