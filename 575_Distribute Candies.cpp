class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int size=candies.size()/2;
        
        map<int, int> mymap;
        
        for(auto c:candies){
            mymap[c]++;
        }
        
        int count=0;
        
        for(auto c:mymap){
            if(count<size and c.second>0){
                count++;
                c.second--;
            }
        }
        
        return count;
    }
};