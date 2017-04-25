class NumMatrix {
public:
    vector<vector<int>> matrix;
    
    NumMatrix(vector<vector<int>> mat) {
        matrix=mat;
        int row=matrix.size();
        int column=0;
        if(row>0)
            column=matrix[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                int a=0;
                int b=0;
                int c=0;
                if(i>0){
                    b=matrix[i-1][j];
                }
                if(j>0){
                    a=matrix[i][j-1];
                }
                if(i>0 and j>0){
                    c=matrix[i-1][j-1];
                }
                
                matrix[i][j]=matrix[i][j]+a+b-c;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans=0;
        if(row1>0 and col1>0){
            ans=matrix[row2][col2]-matrix[row2][col1-1]-matrix[row1-1][col2]+matrix[row1-1][col1-1];
        }
        else if(row1>0){
            ans=matrix[row2][col2]-matrix[row1-1][col2];
        }
        else if(col1>0){
            ans=matrix[row2][col2]-matrix[row2][col1-1];
        }
        else{
            ans=matrix[row2][col2];
        }
        
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = new NumMatrix(matrix);
 * int param_1 = obj.sumRegion(row1,col1,row2,col2);
 */