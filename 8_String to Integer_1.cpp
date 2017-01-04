class Solution {
public:
    int myAtoi(string str) {
     long long ans=0;
    int length=str.length();
    int flag=1;
    int mark=false;
    for(int i=0;i<length;i++)
    {
        if(str[i]=='-')
        {
           if(!mark)
           {
            flag=-1;
            mark=true;
            continue;
           }
           else
            return 0;
        }
        if(str[i]=='+')
        {
           if(!mark)
           {
            flag=1;
            mark=true;
            continue;
           }
           else
            return 0;
        }
        if(str[i]==' ')
        {
            if(!mark)
                continue;
            else
                return ans*flag;
        }

        int a=str[i]-'0';
        if(a>9||a<0)
        {
            return ans*flag;
        }
        ans=ans*10+a;
        mark=true;
        if((flag*ans)>2147483647)
            return 2147483647;
        if((flag*ans)<-2147483648)
            return -2147483648;
    }
    return ans*flag;
    }
};