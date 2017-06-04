class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1) return false;
        
        int sum = 1;
        int tmpnum = num;
        for(int i = 2; i < tmpnum; i++){
            if(num % i == 0){
                sum += i;
                sum += num / i;
                tmpnum = num / i;
            }
        }
        if( sum == num) return true;
        return false;
    }
};