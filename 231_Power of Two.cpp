class Solution {
public:
    bool isPowerOfTwo(int n) {
        double ac=n;
        if(n==0)
            return false;
        while(ac>1){;
            ac=ac/2;
            if(ac!=floor(ac))
                return false;
        }
        if(ac==1)
            return true;
        else
            return false;
    }
};