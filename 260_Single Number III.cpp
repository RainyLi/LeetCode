class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        set<int> myset;
        for(auto num:nums){
            if(myset.find(num)!=myset.end()){
                myset.erase(num);
            }
            else{
                myset.insert(num);
            }
        }
        
        vector<int> ans;
        for(auto num:myset){
            ans.push_back(num);   
        }
        
        return ans;
    }
};