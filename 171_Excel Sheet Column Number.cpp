class Solution {
public:
    int titleToNumber(string s) {
        int size=s.size();
        int ans=0;
        int mul=1;
        for(int i=size-1;i>=0;i--){
            char c=s[i];
            int v=c-'A';
            v=v+1;
            v=v*mul;
            mul=mul*26;
            ans=ans+v;
        }
        return ans;
    }
};