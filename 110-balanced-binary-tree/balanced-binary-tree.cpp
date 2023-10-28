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

    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int l=height(root->left);
        if(l==-1){
          return -1;
        }
        int r=height(root->right);
        if(abs(l - r) >1){
          return -1;
        }
        if(r==-1){
          return -1;
        }
        if(l>r){
            return l+1;
        }
        return r+1;


    }

    bool isBalanced(TreeNode* root) {
      if(height(root)==-1){
        return false;
      }
        return true;

        
    }
};