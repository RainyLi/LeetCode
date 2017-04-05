class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sizen = nums.size();
        map<int, int> count;
        for(int i=0;i<sizen;i++){
            if(count.find(nums[i])==count.end())
                count[nums[i]]=1;
            else
                count[nums[i]]++;
        }
        
        for(auto it=count.begin(); it!=count.end();it++){
            if(it->second==1)
                return it->first;
        }
    }
};