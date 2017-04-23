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
    int wholetilt;
    int findTilt(TreeNode* root) {
        wholetilt=0;
        Tilt(root);
        return wholetilt;
    }
    
    int Sum(TreeNode* root){
        if(root==NULL)
            return 0;
        int ans=root->val;
        ans=ans+Sum(root->right)+Sum(root->left);
        return ans;
    }
    
    void Tilt(TreeNode* root){
        if(root==NULL)
            return;
            
        int leftsum=Sum(root->left);
        int rightsum=Sum(root->right);
        
        wholetilt=wholetilt+abs(leftsum-rightsum);
        
        Tilt(root->right);
        Tilt(root->left);
    }
};