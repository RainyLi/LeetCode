class Solution {
public:
    string addStrings(string num1, string num2) {
        int c=0;
        string ans;
        
        int size1=num1.size();
        int size2=num2.size();
        
        int i1=size1-1;
        int i2=size2-1;
        
        while(i1>=0 or i2>=0 or c>0){
            int n1=0, n2=0;
            
            if(i1>=0){
                n1=num1[i1]-'0';
                i1--;
            }
            
            if(i2>=0){
                n2=num2[i2]-'0';
                i2--;
            }
            
            ans=to_string((n1+n2+c)%10)+ans;
            c=(n1+n2+c)/10;
        }
        
        return ans;
    }
};