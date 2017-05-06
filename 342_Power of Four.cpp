class Solution {
public:
    bool isPowerOfFour(int num) {
        while(num>1){
            if(num%4!=0)
                return false;
            num=num/4;
        }
        
        return num==1;
    }
};