class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<int> oldNums=nums;
        sort(nums.begin(), nums.end());
        
        vector<string> ans;
        
        for(auto n:oldNums){
            
            for(int i=0;i<nums.size();i++){
                if(nums[i]==n){
                    int rank=nums.size()-i;
                    if(rank==1){
                        ans.push_back("Gold Medal");
                    }
                    else if(rank==2){
                        ans.push_back("Silver Medal");
                    }
                    else if(rank==3){
                        ans.push_back("Bronze Medal");
                    }
                    else{
                        ans.push_back(to_string(rank));
                    }
                    
                    break;
                }
            }
        }
        
        return ans;
    }
};