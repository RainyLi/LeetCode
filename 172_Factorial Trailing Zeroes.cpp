class Solution {
public:
    int trailingZeroes(int n) {
        long long c=5;
        int counter=0;
        while(n/c)
        {
            counter=counter+n/c;
            c=c*5;
        }
        return counter;
    }
};