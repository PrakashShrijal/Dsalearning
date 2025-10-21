#include<bits/stdc++.h>
using namespace std;
  class TreeNode {
    public :
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
int maxDia = 0;

int leveltree(TreeNode * root){
    if(root == NULL) return 0;
    return 1 + max(leveltree(root->left) ,leveltree(root->right));
}



int helper(TreeNode* root){
    if(root == NULL) return 0;
        int dia = leveltree(root->left) + leveltree(root->right);
         maxDia = max(maxDia,dia);
         helper(root->left);
         helper(root->right);
         return  maxDia;
}


int diameterOfBinaryTree(TreeNode* root) {
    maxDia = 0; 
    return helper(root);
    }
};
// It need not that it should always pass through main root.
int main()
{
return 0;
}