class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> nums2=nums;
        sort(nums2.begin(), nums2.end());
        
        int size=nums.size();
        
        int start=0;
        int end=0;
        
        for(int i=0;i<size;i++){
            if(nums[i]!=nums2[i]){
                start=i;
                break;
            }
        }
        
        for(int i=size-1;i>=0;i--){
            if(nums[i]!=nums2[i]){
                end=i;
                break;
            }
        }
        
        if(start==end)
            return 0;
        else
            return end-start+1;
    }
};