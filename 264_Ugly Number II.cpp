class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> result (1,1);
        
        int x=0;
        int y=0;
        int z=0;
        
        while(result.size()<n){
            int a=min(result[x]*2, min(result[y]*3, result[z]*5));
            result.push_back(a);
            if(result[x]*2==result.back()) x++;
            if(result[y]*3==result.back()) y++;
            if(result[z]*5==result.back()) z++;
            
        }
        
        return result.back();
    }
};