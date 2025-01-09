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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        if(!root)return ans;
        while(!q.empty()){
            vector<int>level;
            int levelSize=q.size();

            for(int i=0;i<levelSize;i++){
                TreeNode*temp=q.front();
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                level.push_back(temp->val);
            }
           if(!level.empty()){
            ans.push_back(level[level.size()-1]);
           }
        }
        return ans;
    }
};