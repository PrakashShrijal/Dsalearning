#include<bits/stdc++.h>
using namespace std;

  class TreeNode {
    public:
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
int leveltree(TreeNode * root){
    if(root == NULL) return 0;
    return 1 + max(leveltree(root->left) ,leveltree(root->right));
}
void helper(TreeNode* root, int &maxDia){
    if(root == NULL) return;
        int dia = leveltree(root->left) + leveltree(root->right);
         maxDia = max(maxDia,dia);
         helper(root->left,maxDia);
         helper(root->right,maxDia);
}
int diameterOfBinaryTree(TreeNode* root) {
    int maxDia = 0; 
     helper(root,maxDia);
     return maxDia;
    }
};
int main()
{
return 0;
}