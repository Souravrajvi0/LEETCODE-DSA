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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto p= q.front();
            q.pop();
            
            int x=p.second.first;
            int y=p.second.second;
            TreeNode*temp=p.first;

            nodes[x][y].insert(temp->val);

            if(temp->left)q.push({temp->left,{x-1,y+1}});
            if(temp->right)q.push({temp->right,{x+1,y+1}});
        }
        for( auto p : nodes){
         vector<int>col;
         for( auto l : p.second){
          col.insert(col.end(), l.second.begin(), l.second.end());
         }
         ans.push_back(col);
        }
        return ans;
    }
};