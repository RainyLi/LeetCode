class Solution {
public:
    int rob(vector<int>& nums) {
        int numsSize=nums.size();
        vector<int> dp(numsSize, 0);
        if(numsSize==0){
            return 0;
        }
        else if(numsSize==1){
            return nums[0];
        }
        dp[0]=nums[0];
        dp[1]=max(nums[0], nums[1]);
        for(int i=1; i<numsSize; i++)
        {
            dp[i]=max(dp[i-1], dp[i-2]+nums[i]);
        }
        return dp[numsSize-1];
    }
};