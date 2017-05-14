class Solution {
public:
    int findNthDigit(int n) {
        int c=0;
        
        while(n>9*pow(10,c)*(c+1)){
            n=n-9*pow(10,c)*(c+1);
            c++;
        }
        cout<<"n="<<n<<" c="<<c<<endl;
        int m=(n-1)%(c+1);
        int ac=pow(10,c);
        n=(n-1)/(c+1)+ac;
        
        cout<<"n="<<n<<" m="<<m<<" c="<<c<<endl;
        
        string s=to_string(n);
        char ans=s[m];
        return ans-'0';
    }
};