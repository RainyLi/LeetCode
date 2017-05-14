class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        for(auto i:nums){
            nums[abs(i)-1]=nums[abs(i)-1]*(-1);
        }
        
        vector<int> ans;
        //cout<<"*"<<endl;
        for(auto i:nums){
            //cout<<i<<endl;
            if(nums[abs(i)-1]>0){
                nums[abs(i)-1]=nums[abs(i)-1]*-1;
                ans.push_back(abs(i));
            }
        }
        
        return ans;
    }
};