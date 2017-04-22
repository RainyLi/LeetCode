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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
            
        invertTree(root->left);
        invertTree(root->right);
        
        TreeNode * tmp=root->right;
        root->right=root->left;
        root->left=tmp;
        
        return root;
    }
};