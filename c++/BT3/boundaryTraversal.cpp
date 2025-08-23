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
Node* construct(int arr[],int n){
    queue<Node*>q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while (q.size()>0 && i<n)
    {
        Node * temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i] != INT_MIN ) l = new Node(arr[i]);
        else l = NULL;
        if(j != n && arr[j] != INT_MIN ) r = new Node(arr[j]);
        else r = NULL;
         temp->left =l;
         temp->right = r;
         if(l!=NULL) q.push(l);
         if(r!= NULL) q.push(r);
         i +=2;
         j +=2;
    }
    return root;
}
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
  int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,};
  int n = sizeof(arr)/sizeof(arr[0]);
  Node * root = construct(arr,n);
  levelOrderQueue(root);
// boundary traversal
boundary(root);

    return 0;
}