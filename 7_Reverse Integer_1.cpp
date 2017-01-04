class Solution {
public:
    int reverse(int x) {
     int ans=0;
     int xx=x;
     while(xx)
     {
         if(abs(ans)>214748364.7)
            return 0;
         ans=ans*10;
         int a=xx%10;
         xx=xx/10;
         if(abs(ans)>(2147483647-abs(a)))
            return 0;
         ans=ans+a;
     }
     return ans;
    }
};