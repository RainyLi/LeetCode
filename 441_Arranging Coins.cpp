class Solution {
public:
    int arrangeCoins(int n) {
        int ac=1;
        int counter=0;
        while(n>=ac){
            n=n-ac;
            counter++;
            ac=ac+1;
        }
        return counter;
    }
};