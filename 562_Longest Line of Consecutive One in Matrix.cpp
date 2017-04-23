class Solution {
public:
    struct count{
        int h=0;
        int v=0;
        int d=0;
        int a=0;
    };
    
    int longestLine(vector<vector<int>>& M) {
        int row=M.size();
        if(row==0){
            return 0;
        }
        int col=M[0].size();
        
        vector<vector<count>> C;
        
        int m=0;
        for(int i=0;i<row;i++){
            vector<count> Crow;
            for(int j=0;j<col;j++){
                count tmp;
                tmp.h=tmp.v=tmp.d=tmp.a=0;
                if(M[i][j]==0){
                     Crow.push_back(tmp);
                    continue;
                }
                
                if(i!=0){
                    if(j!=0){
                        tmp.a=C[i-1][j-1].a+1;
                    }
                    tmp.v=C[i-1][j].v+1;
                    if(j!=col-1){
                        tmp.d=C[i-1][j+1].d+1;
                    }
                }
                else{
                    tmp.v=1;
                    tmp.a=1;
                    tmp.d=1;
                }
                if(j!=0){
                    tmp.h=Crow[j-1].h+1;
                }
                else{
                    tmp.h=1;
                }
                
                if(tmp.a>m)
                    m=tmp.a;
                if(tmp.d>m)
                    m=tmp.d;
                if(tmp.h>m)
                    m=tmp.h;
                if(tmp.v>m)
                    m=tmp.v;
                cout<<tmp.a<<" ";
                 Crow.push_back(tmp);
            }
            C.push_back(Crow);
            cout<<endl;
        }
        return m;
    }
};