class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector<int> ans;
        
        int size1=nums1.size();
        int size2=nums2.size();
        
        int i=0;
        int j=0;
        
        while(i<size1 and j<size2){
            while(i<size1 and nums1[i]<nums2[j]){
                i++;
            }
            while(j<size2 and nums2[j]<nums1[i]){
                j++;
            }
            
            while(i<size1 and j<size2 and nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        
        return ans;
    }
};