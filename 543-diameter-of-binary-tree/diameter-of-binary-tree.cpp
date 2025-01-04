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
    int maxDepth(TreeNode* root,int &diameter) {
        if(root == NULL) return 0;
        int lefth = maxDepth(root->left,diameter);
        int righth = maxDepth(root->right,diameter);
        if(lefth+righth+1>diameter){
            diameter=lefth+righth;
        }
        return max(lefth,righth)+1;
    }


    int diameterOfBinaryTree(TreeNode* root) {
        int diameter =0;
        int h=maxDepth(root,diameter);
        return diameter;

        
    }
};