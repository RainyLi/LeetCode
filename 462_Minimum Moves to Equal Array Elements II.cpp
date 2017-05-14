class Solution {
public:
    int minMoves2(vector<int>& nums) {
      int size=nums.size();
      
      sort(nums.begin(), nums.end());
      
      int i=0;
      int j=size-1;
      
      int steps=0;
      
      while(i<j){
          steps=steps+nums[j]-nums[i];
          i++;
          j--;
      }
      
      return steps;
    }
};