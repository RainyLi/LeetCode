class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=numbers.size();
        int i, j;
        for(i=0,j=s-1;i<j;)
        {
            int a=numbers[i];
            int b=numbers[j];
            if((a+b)<target)
            {
                i++;
            }
            else if((a+b)>target)
            {
                j--;
            }
            else
            {
                break;
            }
        }
        vector<int> ans;
        ans.push_back(i+1);
        ans.push_back(j+1);
        return ans;
    }
};