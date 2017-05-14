class Solution {
public:
    int minMoves(vector<int>& nums) {
        int size=nums.size();
        if(size<2)
            return 0;
            
        int ans=0;
        
        sort(nums.begin(), nums.end());
        
        for(int i=1;i<size;i++){
            ans=ans+nums[i];
        }
        
        ans=ans-(size-1)*nums[0];
        
        return ans;
    }
};