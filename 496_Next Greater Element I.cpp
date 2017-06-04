class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        int numsSize=nums.size();
        set<int> myset;
        map<int,int> mymap;
        
        for(int i=numsSize-1;i>=0;i--){
            int x=nums[i];
            int tmp=-1;
            for(int j=i+1;j<numsSize;j++){
                if(nums[j]>x){
                    tmp=nums[j];
                    break;
                }
            }
            
            mymap[x]=tmp;
        }
        
        vector<int> ans;
        for(auto f:findNums){
            ans.push_back(mymap[f]);
        }
        
        return ans;
    }
};