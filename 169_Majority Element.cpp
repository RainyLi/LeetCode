class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int x=nums.size()/2;
        return nums[x];
    }
};