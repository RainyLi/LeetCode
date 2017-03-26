class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        while(n>0)
        {
            n=n-1;
            int x= n%26;
            char c='A'+ x;
            ans=c+ans;
            n=n/26;
        }
        return ans;
    }
};