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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        
        if(root==NULL)
            return ans;
        else{
            vector<string> ans1 = binaryTreePaths(root->left);
            vector<string> ans2 = binaryTreePaths(root->right);
            for(auto it : ans1){
                string tmp=to_string(root->val)+"->"+it;
                ans.push_back(tmp);
            }
            for(auto it : ans2){
                string tmp=to_string(root->val)+"->"+it;
                ans.push_back(tmp);
            }
            if(ans1.size()==0 and ans2.size()==0){
                string tmp=to_string(root->val);
                ans.push_back(tmp);
            }
        }
        return ans;
    }
};