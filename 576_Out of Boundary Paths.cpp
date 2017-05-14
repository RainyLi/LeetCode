class Solution {
public:
    

    int subfindPaths(int m, int n, int N, int i, int j, int dp[51][51][51]){
        for(int Ni=1;Ni<=N;Ni++){
            for(int mi=0; mi<m; mi++){
                for(int ni=0; ni<n; ni++){
                    long left=1;
                    long right=1;
                    long up=1;
                    long down=1;
                    
                    if(ni>0){
                        left=dp[Ni-1][mi][ni-1]%1000000007;
                    }
                    
                    if(ni<n-1){
                        right=dp[Ni-1][mi][ni+1]%1000000007;
                    }
                    
                    if(mi>0){
                        up=dp[Ni-1][mi-1][ni]%1000000007;
                    }
                    
                    if(mi<m-1){
                        down=dp[Ni-1][mi+1][ni]%1000000007;
                    }
                    
                    dp[Ni][mi][ni]=(left+right+up+down)%1000000007;
                    //cout<<Ni<<" "<<mi<<" "<<ni<<" "<<dp[Ni][mi][ni]<<endl;
                }
            }
        }
        
        return dp[N][i][j];
            
    }
    int findPaths(int m, int n, int N, int i, int j) {
        int dp[51][51][51]={0};
        int x = subfindPaths(m, n, N, i, j, dp);
        return x;
    }
};