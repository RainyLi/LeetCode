class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        int a=0;
        int b=0;
        for(int i=0;i<size;i++){
            a=a^nums[i];
            b=b^i;
        }
        b=b^size;
        return a^b;
    }
};