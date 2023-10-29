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

    bool check(TreeNode* root, TreeNode* temp){
        if(root==NULL){
            return false;
        }
        if(root==temp){
            return true;
        }
        if(check(root->left,temp)||check(root->right,temp)){
          return true;
        }
       
        return false;
        
    }


    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }

        bool f=check(root,p);
        bool s=check(root,q);
     
        if(f==false||s==false){
            return NULL;
        }
        TreeNode*temp=root;
      TreeNode*temp1=lowestCommonAncestor(root->left,p,q);
      TreeNode*temp2=lowestCommonAncestor(root->right,p,q);

        if(temp1){
            temp=temp1;
        }
        if(temp2){
            temp=temp2;
        }
        return temp;





        
    }
};