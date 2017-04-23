class Solution {
public:
    int addDigits(int num) {
        string s=to_string(num);
        while(s.length()>1){
            int x=0;
            for(auto c:s){
                int a= c-'0';
                x=x+a;
            }
            
            s=to_string(x);
        }
        
        return stoi(s);
    }
};