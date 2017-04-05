class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size=nums.size();
        vector<vector<int>> ans;
        if(size<3)
            return ans;
        int previous=nums[0]-1;
        
        
        for(int i=0;i<size;i++){
            vector<int> temp;
            //cout<<i<<endl;
            if(nums[i]==previous)
                continue;
            temp.push_back(nums[i]);
            int p=i+1;
            int q=size-1;
            while(p<q){
                //cout<<p<<" "<<q<<endl;
                if(nums[p]+nums[q]>(-1)*nums[i]){
                    q=q-1;
                }
                else if (nums[p]+nums[q]<(-1)*nums[i]){
                    p=p+1;
                }
                else{
                    temp.push_back(nums[p]);
                    temp.push_back(nums[q]);
                    ans.push_back(temp);
                    temp.pop_back();
                    temp.pop_back();
                    cout<<p<<" "<<q<<endl;
                    for(p=p+1;p<size and nums[p-1]==nums[p];p++)
                    {
                        cout<<p<<endl;
                    }
                    for(q=q-1;q>0 and nums[q]==nums[q+1];q--);
                    cout<<p<<" "<<q<<endl;
                }
            }
            previous=nums[i];
        }
        return ans;
    }
};