class NumArray {
public:
    vector<int> result;
    NumArray(vector<int> nums) {
        int size=nums.size();
        int ans=0;
        
        for(int i=0;i<size;i++){
            ans=ans+nums[i];
            result.push_back(ans);
        }
    }
    
    int sumRange(int i, int j) {
        if(i==0)
            return result[j];
        else
            return result[j]-result[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */