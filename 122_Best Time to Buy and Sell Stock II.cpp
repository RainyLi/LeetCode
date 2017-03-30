class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int length=prices.size();
        int profit=0;
        for(int i=1;i<length;i++){
            if(prices[i]>prices[i-1]){
                profit=profit+prices[i]-prices[i-1];
            }
        }
        return profit;
    }
};