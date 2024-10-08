/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode*root){
     if(root==NULL)return 0;

    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
    
    bool isBalanced(TreeNode* root) {
     if(root==NULL)return true;  
      
      int leftsh=height(root->left);
      int rightsh=height(root->right);

      if(!isBalanced(root->left)||!isBalanced(root->right)){
           return false;
      }
     if(abs(leftsh-rightsh)>1)return false;
      return true;
        
        
    }
};