class Solution {
public:
    int countPrimes(int n) {
        vector<bool> mark(n, true);
        int count=0;
        for(int i= 2;i<=sqrt(n);i++){
            if(mark[i]==false)
                continue;
            count++;
            //cout<<i<<endl;
            for(int j=i*i;j<n;j=j+i){
                mark[j]=false;
            }
        }
        for(int j=sqrt(n)+1; j<n; j++){
            if(mark[j]){
                count++;
                //cout<<j<<endl;
            }
        }
        return count;
    }
};