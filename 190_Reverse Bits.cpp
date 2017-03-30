class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int i=0;
        uint32_t m=0;
        uint32_t maskm=0b10000000000000000000000000000000;
        bool bitn=1;
        while(i<32){
            bitn=n&(1<<i);
            if(bitn){
                m=m^(maskm>>i);
            }
            i++;
        }
        return m;
    }
};