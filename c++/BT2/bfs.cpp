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


// for more detail refer to the program  PIP inn recursion
void preorder(Node *root)
{
    if (root == NULL)  return;
    cout << root->val << " "; // work
    preorder(root->right);    // call
    preorder(root->left);     // call
}
void inorder(Node *root)
{
    if (root == NULL) return;
    inorder(root->right); // call
    cout << root->val << " "; // work
    inorder(root->left);  // call
}
void postorder(Node *root)
{
    if (root == NULL)  return;
    postorder(root->right); // call
    postorder(root->left);  // call
    cout << root->val << " "; // work
}

// kind of  bfs ......................
void nthlevel(Node *root, int curr, int level)
{
    if (root == NULL)
        return;

    if(curr == level) cout << root->val << " "; // work
    nthlevel(root->left,curr+1,level);  // call
    nthlevel(root->right,curr+1,level); // call
    
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
     

    nthlevel(a,1,2);

    return 0;
}