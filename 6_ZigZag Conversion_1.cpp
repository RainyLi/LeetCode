#include "Solution.h"

using namespace std;
string Solution::convert(string s, int n)
{
    //beat 76%
    string zigzag;
    int p=0;
    int l=s.length();
    int zigzag_l=l;
    if(n==1)
    {
        return s;
    }
    while(p<l&&zigzag_l>0)
    {
        zigzag.append(1,s[p]);
        zigzag_l--;
        p=p+2*n-2;
    }
    for(int line=1;line<n-1;line++)
    {
        int group_number=l/(n-1)+1;
        for(int group_i=0;group_i<group_number;group_i++)
        {
            if(group_i%2==0)//if group_i is even
            {
                //start from (n-1)*group_i, end at (n-1)*(group_i+1)
                p=(n-1)*group_i+line;
                if(p<l&&zigzag_l>0)
                {
                    zigzag.append(1,s[p]);
                    zigzag_l--;
                }
            }
            else//group_i is odd
            {
                p=(n-1)*(group_i+1)-line;
                if(p<l&&zigzag_l>0)
                {
                    zigzag.append(1,s[p]);
                    zigzag_l--;
                }
            }
        }
    }
    p=n-1;
    while(p<l&&zigzag_l>0)
    {
        zigzag.append(1,s[p]);
        zigzag_l--;
        p=p+2*n-2;
    }
    return zigzag;
}
