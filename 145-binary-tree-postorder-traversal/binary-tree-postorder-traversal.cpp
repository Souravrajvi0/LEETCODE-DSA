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
void helper(TreeNode*node,vector<int>&nodes){
      if(node==NULL)return;
      helper(node->left,nodes);
      helper(node->right,nodes);
      nodes.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>nodes;
        helper(root,nodes);
        return nodes;
    }
};