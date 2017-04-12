class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> map;
        
        int size=nums.size();
        for(int i=0; i<size; i++){
            if(map.find(nums[i])!=map.end() and (abs(map[nums[i]]-i)<=k)){
                    return true;
            }
            else{
                map[nums[i]]=i;
            }
                
        }
        
        return false;
    }
};