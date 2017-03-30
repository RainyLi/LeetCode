class Solution {
public:
    int trailingZeroes(int n) {
        int counter=0;
        while(n)
        {
            n=n/5;
            counter=counter+n;
        }
        return counter;
    }
};