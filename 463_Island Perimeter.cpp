class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row=grid.size();
        if(row==0)
            return 0;
            
        int column=grid[0].size();
        int count=0;
        
        for(int i=0;i<row;i++){
            for(int j=0; j<column; j++){
                if(grid[i][j]==1){
                    count=count+4;
                    
                    if(i>0 and grid[i-1][j]==1){
                        count--;
                    }
                    if(i<row-1 and grid[i+1][j]==1){
                        count--;
                    }
                    if(j>0 and grid[i][j-1]==1){
                        count--;
                    }
                    if(j<column-1 and grid[i][j+1]==1){
                        count--;
                    }
                }
            }
        }
        
        return count;
        
    }
};