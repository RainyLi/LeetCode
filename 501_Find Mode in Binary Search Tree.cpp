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

    void PreTranverse(TreeNode* root, vector<int> &ans){
        if(root->left){
            PreTranverse(root->left, ans);
        }
        ans.push_back(root->val);
        if(root->right){
            PreTranverse(root->right, ans);
        }
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        vector<int> mode;
        
        if(root==NULL){
            return mode;
        }
        
        PreTranverse(root, ans);
        
        int tmp=1;
        int max=1;
        mode.push_back(ans[0]);
        
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1]){
                tmp++;
                if(tmp==max){
                    mode.push_back(ans[i]);
                }
                if(tmp>max){
                    mode.clear();
                    mode.push_back(ans[i]);
                    max=tmp;
                }
            }
            else{
                tmp=1;
                if(tmp==max){
                    mode.push_back(ans[i]);
                }
            }
        }
        
        return mode;
    }
};