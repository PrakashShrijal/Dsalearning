#include<iostream>
using namespace std;
class Node{  // TreeNode
    public :
    int val;
    Node * left;
    Node* right;
    Node(int val){
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }
};
void dispalTree(Node* root){
    if (root == NULL)
        return;
        cout<<root->val<<" ";
    
   
    dispalTree(root->right);
    dispalTree(root->left);
    
}
 bool exists(Node* root, Node* target){
        if(root == NULL) return false;
        if(root == target) return true;
        return exists(root->left,target)|| exists(root->right,target);
    }
    Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        if(root == p || root == q) return root;
        else if(exists(root->left,p) && exists(root->right,q)) return root;
        else if(exists(root->right,p) && exists(root->left,q)) return root;
        else if(exists(root->left,p) && exists(root->left,q)) return 
        lowestCommonAncestor(root->left,p,q);
        else return lowestCommonAncestor(root->right,p,q);
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
    dispalTree(a);
    cout<<endl;
    Node* lca = lowestCommonAncestor(a,b,d);
    cout<<lca->val;
   
return 0;
}