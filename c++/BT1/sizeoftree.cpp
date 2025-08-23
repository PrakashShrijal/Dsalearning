#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *right;
    Node *left;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int sizetree(Node *root)   // size if tree is the sum of the nodes in the tree.....
{
    if (root == NULL)
        return 0;
    return 1 + sizetree(root->left) + sizetree(root->right);
}

int maxNode(Node* root){  // max value of node in the given tree...............
    
if(root == NULL) return INT_MIN;
return max(root->val,max(maxNode(root->left),maxNode(root->right)));

}

int leveltree(Node* root){
    if(root == NULL) return 0;
    return 1 + max(leveltree(root->left) ,leveltree(root->right));
}
int height(Node* root){
    if(root == NULL) return 0;
    return max(leveltree(root->left) ,leveltree(root->right)) ;
}
int main(){
    Node *a = new Node(1);
    Node *b = new Node(4);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(10);
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

    cout << sizetree(a)<<endl;
    cout<<maxNode(a)<<endl;
    cout<<leveltree(a)<<endl;
    cout<<height(a);
    return 0;
}