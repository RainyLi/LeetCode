class Solution {
public:
    string convertToBase7(int num) {
        int flag=1;
        if(num<0){
            flag=-1;
            num=num*-1;
        }
        if(num==0)
            return "0";
        
        string ans="";
        while(num){
            int c=num%7;
            ans=to_string(c)+ans;
            num=num/7;
        }
        
        if(flag==-1)
            ans="-"+ans;
        
        return ans;
        
    }
};