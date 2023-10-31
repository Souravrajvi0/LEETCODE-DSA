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

     bool check(TreeNode*root,long long int lb,long long int ub){
         if(root==NULL){
             return true;
         }
          
          if(root->val>lb&&root->val<ub){
          bool lt=check(root->left,lb,root->val);
          bool rt=check(root->right,root->val,ub);
          
          return lt&&rt;

            



          }else{
            return false;  
          }
          
        
        
  }
 bool isValidBST(TreeNode* root) {
        long long int lb=-1000000000000;
        long long  int ub=1000000000000;
        return check(root,lb,ub);
        
}
};