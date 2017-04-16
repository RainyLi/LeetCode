class Solution {
public:
    bool checkRecord(string s) {
        int size=s.size();
        int A=0;
        int L=0;
        for(int i=0;i<size;i++){
            if(s[i]=='A'){
                if(A!=0)
                    return false;
                A++;
                L=0;
            }
            else if(s[i]=='L'){
                if(L>=2)
                    return false;
                L++;
            }
            else{
                L=0;
            }
        }
        return true;
    }
};