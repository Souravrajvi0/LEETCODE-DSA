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
    bool checkmin (TreeNode* root,int key){
          if(root==NULL){
            return true;
        }
        if(root->val<=key){
            return false;
        }
        bool t=checkmin(root->left,key);
        bool r=checkmin(root->right,key);
        if(t==false||r==false){
            return false;
        }
        return true;
        

    }
    bool checkmax (TreeNode* root,int key){
        if(root==NULL){
            return true;
        }
        if(root->val>=key){
            return false;
        }
        bool t=checkmax(root->left,key);
        bool r=checkmax(root->right,key);
        if(t==false||r==false){
            return false;
        }
        return true;



    }
    
    bool isValidBST(TreeNode* root) {
        if(root==NULL){
            return true;
        }
       bool l=checkmax(root->left,root->val);
       bool r=checkmin(root->right,root->val);
       if(l==false||r==false){
           return false;
       }
       bool lt= isValidBST(root->left);
       bool rt= isValidBST(root->right);
       if(lt==false||rt==false){
           return false;
       }
       return true;


     

        
    }
};