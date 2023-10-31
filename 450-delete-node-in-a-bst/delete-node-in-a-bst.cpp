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
    TreeNode* max(TreeNode* root){
        if(root==NULL){
         return root;
        }
        TreeNode*temp=root;
        while(temp->right!=NULL){
            temp=temp->right;
        }
        return temp;

    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return root;
        }
        if(root->val>key){
          root->left= deleteNode(root->left,key);      
        }else if(root->val<key){
          root->right=deleteNode(root->right,key);
        }else{
            if(root->left==NULL&root->right==NULL){
                delete root;
                return NULL;

            }else if(root->left==NULL){
                   TreeNode* temp=root->right;
                   delete root;
                   return temp;
            }else if(root->right==NULL){
                TreeNode* temp=root->left;
                   delete root;
                   return temp;

            }else{
            TreeNode*temp2=max(root->left);
            root->val=temp2->val;
            root->left=deleteNode(root->left,temp2->val);





            }

        }
        return root;
        
    }
};