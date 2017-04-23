class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ac=0;
        for(auto num : nums){
            ac=ac^num;
        }
        
        int counter=0;
        int mask=1;
        while(counter<=31){
            int x=mask&ac;
            if(x)
                break;
            else{
                mask=mask<<1;
                counter++;
            }
        }
        
        int ac1=0;
        int ac2=0;
        
        for(auto num : nums)
        {
            if(mask&num){
                ac1=ac1^num;
            }
            else{
                ac2=ac2^num;
            }
        }
        
        vector<int> ans;
        ans.push_back(ac1);
        ans.push_back(ac2);
        return ans;
    }
};