class Solution {
public:
    int thirdMax(vector<int>& nums) {
        list<int> list;
        
        for(auto n:nums){
            int s=list.size();
            auto i=list.begin();
            for(;i!=list.end();i++){
                if(*i==n){
                    break;
                }
                if(*i<n){
                    list.insert(i, n);
                    break;
                }
            }
            
            if(i==list.end()){
                list.push_back(n);
            }
            
            if(list.size()>3){
                list.pop_back();
            }
        }
        
        if(list.size()==3)
            return list.back();
        else
            return list.front();
    }
};