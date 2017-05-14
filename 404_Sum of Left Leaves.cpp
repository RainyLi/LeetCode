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
    int subSumLeft(TreeNode* root, bool isLeft){
        if(root==NULL)
            return 0;
        if(isLeft and root->left==NULL and root->right==NULL){
            return root->val;
        }
        return subSumLeft(root->left, true)+subSumLeft(root->right, false);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        
        return subSumLeft(root, false);
    }
};