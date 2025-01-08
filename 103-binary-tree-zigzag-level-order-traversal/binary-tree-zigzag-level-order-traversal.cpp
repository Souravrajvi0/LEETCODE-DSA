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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    if(!root) return ans;
    queue<TreeNode*> q;
    q.push(root);
    // 1-> left to right
    // 0-> right to left
    bool flag=true;
    while(!q.empty()){
     int levelSize = q.size();
     vector<int>level(levelSize);
     
     for(int i = 0; i < levelSize; i++){
        TreeNode*temp=q.front();
        q.pop();
        int index = (flag) ?  i : (levelSize-i-1);
        level[index]=temp->val;
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);
    }
    flag=!flag;
    ans.push_back(level);
    }
    return ans;
        
    }
};