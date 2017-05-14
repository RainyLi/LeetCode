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

    string PreSearch(TreeNode *s){
        string ans="";
        if(s){
            ans=ans+to_string(s->val);
            ans=ans+PreSearch(s->left)+PreSearch(s->right);
        }
        else{
            ans=ans+"n";
        }
        
        return ans;
    }
    
    string MidSearch(TreeNode *s){
        string ans="";
        if(s){
            ans=ans+MidSearch(s->left);
            ans=ans+to_string(s->val);
            ans=ans+MidSearch(s->right);
        }
        else
        {
            ans=ans+"n";
        }
        return ans;
    }
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        
        string sp=PreSearch(s);
        string tp=PreSearch(t);
        
        string sm=MidSearch(s);
        string tm=MidSearch(t);
        
        if(sm.find(tm)!=-1 and sp.find(tp)!=-1)
            return true;
        else
            return false;
    }
};