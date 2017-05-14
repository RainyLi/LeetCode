class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> dic(256,0);
        
        for(auto c:s){
            dic[c]++;
        }
        
        int count=0;
        int max=0;
        for(int i=0;i<256;i++){
            if(dic[i]%2==0){
                count=count+dic[i];
            }
            else{
                if(dic[i]>0){
                    count=count+dic[i]-1;
                }
                if(dic[i]>max){
                    max=dic[i];
                }
            }
        }
        if(max>0){
            count=count+1;
        }
        return count;
    }
};