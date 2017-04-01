class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t mask=1;
        int counter=0;
        int i=0;
        while(i<32)
        {
            if(n&mask)
                counter++;
            mask=mask<<1;
            i++;
        }
        return counter;
    }
};