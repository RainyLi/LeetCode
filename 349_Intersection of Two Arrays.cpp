class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set;
        for(auto num:nums1){
            set.insert(num);
        }
        
        vector<int> ans;
        unordered_set<int> set2;
        for(auto num:nums2){
            if(set.find(num)!=set.end()){
                set2.insert(num);
            }
        }
        
        for(auto num:set2){
            ans.push_back(num);
        }
        
        return ans;
    }
};