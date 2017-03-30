class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int size=nums.size();
        k=k%size;
        for(int i=size-k;i<size;i++)
        {
            temp.push_back(nums[i]);
        }
        for(int i=size-k-1;i>=0;i--)
        {
            nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++)
        {
            nums[i]=temp[i];
        }
        return;
    }
};