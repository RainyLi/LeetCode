class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int> candidates, int target) {
        int size=candidates.size();
        vector<vector<int>> ans;
        
        sort(candidates.begin(), candidates.end());
        
        int pre=-1;
        
        for(int i=size-1;i>=0;i--){
            
            int x=candidates[i];
            candidates.pop_back();
            
            if(x==pre){
                continue;
            }
            else{
                pre=x;
            }
            
            if(x<target){
                vector<vector<int>> subans=combinationSum2(candidates, target-x);
                
                for(auto sub:subans){
                    sub.push_back(x);
                    ans.push_back(sub);
                }
            }
            
            else if(x==target){
                
                //cout<<"x="<<x<<" pre="<<pre<<endl;
                vector<int> tmp;
                tmp.push_back(x);
                ans.push_back(tmp);
            }
            
        }
        return ans;
    }
};