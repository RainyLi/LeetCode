class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        map<int, int> mymap;
        for(auto num:nums1){
            if(mymap.find(num)!=mymap.end()){
                mymap[num]++;
            }
            else{
                mymap[num]=1;
            }
        }
        
        map<int, int> mymap2;
        for(auto num:nums2){
            if(mymap.find(num)!=mymap.end()){
                if(mymap2.find(num)!=mymap2.end()){
                    if(mymap2[num]+1<=mymap[num]){
                        mymap2[num]++;
                    }
                }
                else{
                    mymap2[num]=1;
                }
            }
        }
        
        for(auto it:mymap2){
            for(int i=0;i<it.second;i++){
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};