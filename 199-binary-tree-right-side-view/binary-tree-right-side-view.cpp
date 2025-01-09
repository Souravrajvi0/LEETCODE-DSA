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
    void help(TreeNode* root,vector<int>&res,int depth){
     if(!root) return ;
     if(depth==res.size()){
        res.push_back(root->val);
     }

     help(root->right, res, depth+1);
     help(root->left, res, depth+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        if(!root)return res;
        help(root, res, 0);
        return res;
    }
};