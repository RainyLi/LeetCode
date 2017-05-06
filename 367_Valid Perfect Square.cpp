class Solution {
public:
    bool isPerfectSquare(int num) {
        long x=num;
        while(x*x>num){
            x=(num/x+x)/2;
        }
        
        return x*x==num;

    }
};