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

    void PreTranverse(TreeNode* root, int sum, int& ans, vector<int> myvector){

        int s=myvector.size();
        
        for(int i=0;i<s;i++){
            myvector[i]=myvector[i]+root->val;
            if(myvector[i]==sum)
                ans++;
        }
        myvector.push_back(root->val);
        if (root->val==sum)
            ans++;
            
        if(root->left){
            PreTranverse(root->left, sum, ans, myvector);
        }
        if(root->right){
            PreTranverse(root->right, sum, ans, myvector);
        }
        
    }
    
    int pathSum(TreeNode* root, int sum) {
        int ans=0;
        vector<int> myvector;
        if(root){
            PreTranverse(root, sum, ans, myvector);
        }
        
        return ans;
    }
};