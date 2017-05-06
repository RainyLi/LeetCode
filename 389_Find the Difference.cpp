class Solution {
public:
    char findTheDifference(string s, string t) {
        //int size=s.size();
        
        char x=0;
        for(auto c:s){
            x=x^c;
        }
        
        for(auto c:t){
            x=x^c;
        }
        
        return x;
    }
};