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
    TreeNode* anc;
    bool find(TreeNode* root, TreeNode* n){
        if(root==NULL)
            return false;
        if(root==n)
            return true;
        return (find(root->left, n) or find(root->right, n));
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        anc=root;
        
        while(root!=NULL){
            if(find(root->left, q) and find(root->left, p)){
                anc=root->left;
                root=root->left;
            }
            else if(find(root->right, p) and find(root->right, q)){
                anc=root->right;
                root=root->right;
            }
            else{
                break;
            }
        }
        
        return anc;
        
    }
};