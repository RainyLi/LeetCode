class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> set;
        int size=nums.size();
        
        for(int i=0; i<size; i++){
            if(set.find(nums[i])!=set.end()){
                return true;
            }
            else{
                set.insert(nums[i]);
            }
        }
        
        return false;
    }
};