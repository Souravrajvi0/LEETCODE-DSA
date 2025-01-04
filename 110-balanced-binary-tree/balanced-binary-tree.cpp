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
int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int lefth = maxDepth(root->left);
        if(lefth==-1)return -1;
        int righth = maxDepth(root->right);
        if (righth == -1) return -1;
        return (abs(lefth-righth)<=1)? max(lefth,righth)+1 : -1;
    }



    bool isBalanced(TreeNode* root) {
       return !(maxDepth(root) == -1);
        
    }
};