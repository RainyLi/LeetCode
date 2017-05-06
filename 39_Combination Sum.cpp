class Solution {
public:
    vector<vector<int>> combinationSum(vector<int> candidates, int target) {
       
      // cout<<target<<endl;
       int size=candidates.size();
       vector<vector<int>> ans;
       
       for(int i=size-1;i>=0;i--){
           int ac=1;
           vector<int> tmp;
           int x=candidates[i];
           candidates.pop_back();
           while(x*ac<target){
               //cout<<"x="<<x<<" ac="<<ac<<endl;
               tmp.push_back(x);
               vector<vector<int>> subans=combinationSum(candidates, target-x*ac);
               ac++;
               
               for(auto sub:subans){
                   sub.insert(sub.end(), tmp.begin(), tmp.end());
                   ans.push_back(sub);
               }
           }
           
           if(x*ac==target){
               tmp.push_back(x);
               ans.push_back(tmp);
           }
           
       }
       
       return ans;
       
    }
};