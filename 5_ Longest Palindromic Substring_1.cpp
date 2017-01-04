#include "Solution.h"

string Solution::longestPalindrome(string s)
{
    //dynamic planning,12.44%
    bool m[1001][1001]={false};
    int l=s.length();
    a=0;
    b=0;
    for(int i=0;i<l;i++)
    {
        m[i][i]=true;
        if(s[i]==s[i+1])
        {
             m[i][i+1]=true;
             a=i;
             b=i+1;
        }
        else
            m[i][i+1]=false;
    }
    for(int j=2;j<l;j++)
    {
        for(int i=0;i<l;i++)
        {
            if((i+j)<l&&m[i+1][i+j-1]&&s[i]==s[i+j])
            {
                m[i][i+j]=true;
                if(j>(b-a))
                {
                    a=i;
                    b=i+j;
                }
            }
            else
                m[i][i+j]=false;
        }
    }
    return s.substr(a,b-a+1);
};
