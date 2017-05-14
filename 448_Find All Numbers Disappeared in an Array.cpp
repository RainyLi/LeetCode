class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> myset;
        vector<int> ans;
        int size=nums.size();
        
        for(auto n:nums){
            myset.insert(n);
        }
        
        int pre=0;
        for(auto n:myset){
            if(n-pre>1){
                for(int i=pre+1;i<n;i++){
                    ans.push_back(i);
                }
                
                pre=n;
            }
            else if(n-pre==1){
                pre=n;
            }
        }
        
        for(int i=pre+1;i<=size;i++)
        {
             ans.push_back(i);
        }
        
        return ans;
    }
};