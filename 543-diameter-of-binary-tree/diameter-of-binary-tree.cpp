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
    if(!root) return 0;
    int lefth=height(root->left);
    int righth=height(root->right);
    return max(lefth,righth)+1;
    }

    void check(TreeNode*root,int &max){
        if(!root)return;
        int lefth=height(root->left);
        int righth=height(root->right);
        if(lefth+righth>max){
            max=lefth+righth;
        }
        check (root->left,max);
        check(root->right,max);
     }

    
    int diameterOfBinaryTree(TreeNode* root) {
     int max=0;
      if(!root)return 0;
      check(root,max);
      return max;

        
    }
};