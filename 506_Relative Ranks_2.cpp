class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {

        priority_queue<pair<int, int>> pqueue;
        
        vector<string> ans(nums.size());
        
        for(int i=0;i<nums.size();i++){
            pqueue.push(make_pair(nums[i], i));
        }
        
        int count=1;
        while(!pqueue.empty()){
            string rank;
            if(count==1)
                rank="Gold Medal";
            else if(count==2)
                rank="Silver Medal";
            else if(count==3)
                rank="Bronze Medal";
            else
                rank=to_string(count);
            ans[pqueue.top().second]=rank;
            count++;
            pqueue.pop();
        }
        
        return ans;
    }
};