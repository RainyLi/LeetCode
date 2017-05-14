class Solution {
public:
    bool check(string &s, int len){
        if(s.size()%len!=0)
            return false;
            
        for(int i=len;i<s.size();i=i+len){
            int j=0;
        
            for(j=0;j<len;j++){
                if(s[j]!=s[i+j]){
                    return false;
                }
            }
            
        }
        
        return true;
    }

    bool repeatedSubstringPattern(string s) {
        int size=s.size();
        
        for(int len=1;len<=size/2;len++){
            //cout<<"len="<<len<<endl;
            if(check(s, len))
                return true;
        }
        
        return false;
    }
};