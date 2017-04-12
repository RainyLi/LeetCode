class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<int> set;
        int size=nums.size();
        int i=0;
        for(i=0;i<=k and i<size;i++){
            if(!set.insert(nums[i]).second and t>=0)
                return true;
            auto it1=set.find(nums[i]);
            auto it2=set.find(nums[i]);
            //cout<<nums[i]<<" "<<*it1<<" "<<*it2<<" "<<t<<endl;
            if(it1!=set.begin() ){
                it1--;
                if(abs((long)(*it1)-nums[i])<=t)
                    return true;
            }
            if(it2!=set.end()){
                it2++;
                if(it2!=set.end() and abs((long)(*it2)-nums[i])<=t)
                    return true;
            }
        }
        
        if(i<=k)
            return false;
        
        for(int i=k+1;i<size;i++){
            set.erase(nums[i-(k+1)]);
            if(!set.insert(nums[i]).second and t>=0)
                return true;
            auto it1=set.find(nums[i]);
            auto it2=set.find(nums[i]);
            //cout<<nums[i]<<" "<<*it1<<" "<<*it2<<" "<<t<<endl;
            if(it1!=set.begin() ){
                it1--;
                if(abs((long)(*it1)-nums[i])<=t)
                    return true;
            }
            if(it2!=set.end()){
                it2++;
                if(it2!=set.end() and abs((long)(*it2)-nums[i])<=t)
                    return true;
            }
        }
        
        return false;
        
    }
};