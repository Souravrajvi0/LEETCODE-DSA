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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        if(root==NULL)return res;
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;
        s1.push(root);
        while(!s1.empty()){
            TreeNode*temp1=s1.top();
            s1.pop();
            s2.push(temp1);
            temp1=s2.top();
            if(temp1->left!=NULL)s1.push(temp1->left);
            if(temp1->right!=NULL)s1.push(temp1->right);
        }
        
        while(!s2.empty()){
            res.push_back(s2.top()->val);
            s2.pop();
        }
        
        return res;
    }
};