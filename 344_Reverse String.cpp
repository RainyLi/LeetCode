class Solution {
public:
    string reverseString(string s) {
        int size=s.size();
        string ans=s;
        for(int i=size-1;i>=0;i--)
        {
            ans[size-1-i]=s[i];
        }
        return ans;
    }
};