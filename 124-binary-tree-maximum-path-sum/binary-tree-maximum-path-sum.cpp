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
    int maxsum=INT_MIN;
    int helper(TreeNode* root){
    if(!root)return 0;
    int leftpathsum=max(0,helper(root->left));
    int rightpathsum=max(0,helper(root->right));
    int sum=root->val+leftpathsum+rightpathsum;
    maxsum=max(sum,maxsum);
    return root->val+max(leftpathsum,rightpathsum);
   }

    int maxPathSum(TreeNode* root) {
    helper(root);
    return maxsum;
    }
};