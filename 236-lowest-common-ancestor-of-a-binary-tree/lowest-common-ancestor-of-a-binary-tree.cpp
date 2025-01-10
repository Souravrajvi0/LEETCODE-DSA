/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
     bool findP(TreeNode* root, TreeNode* node, vector<TreeNode*>&path){
      if(!root) return false;
      path.push_back(root);
      if(root->val == node->val)return true;
      
      bool leftP = findP(root->left, node, path);
      if(leftP) return true;

      bool rightP = findP(root->right, node, path);
      if(rightP) return true;
      
      path.pop_back();
      return false;
     }
   

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>p1;
        findP(root,p,p1);
        vector<TreeNode*>p2;
        findP(root,q,p2);
        int i = 0, j = 0;
        TreeNode* lca = root;
        while(i < p1.size() && j < p2.size()){
         if(p1[i]->val == p2[j]->val){
            lca= p1[i];
         }else{
            break;
         }
         i++;
         j++;
        }
        return lca;
    }
};