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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>res;
        if(root==NULL)return res; // ye bhulta huon main
        while(!q.empty()){
           int level=q.size();
           vector<int>ans;
           for(int i=0;i<level;i++){
             TreeNode* temp=q.front();
             q.pop();
            if (temp != nullptr) {
                ans.push_back(temp->val);
                if (temp->left != nullptr) q.push(temp->left);
                if (temp->right != nullptr) q.push(temp->right);
            }
            }
        res.push_back(ans);
        }
        return res;
    }
};