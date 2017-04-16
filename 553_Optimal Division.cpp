class Solution {
public:

    string optimalDivision(vector<int>& nums) {
        int size=nums.size();
        if(size==0)
            return "";
        else{
            string ans=to_string(nums[0]);
            if(size==1){
                return ans;
            }
            else if(size==2)
                return ans+"/"+to_string(nums[1]);
            else{
                ans=ans+"/("+to_string(nums[1]);
                bool flag=false;
                for(int i=2;i<size;i++)
                {
                     ans=ans+"/"+to_string(nums[i]);
                }
                ans=ans+")";
            }
            return ans;
        }
    }
};