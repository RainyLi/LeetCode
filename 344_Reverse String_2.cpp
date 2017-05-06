class Solution {
public:
    string reverseString(string s) {
        int size=s.size();
        int i=0;
        int j=size-1;
        while(i<j){
            char tmp=s[i];
            s[i]=s[j];
            s[j]=tmp;
            
            i++;
            j--;
        }
        
        return s;
    }
};