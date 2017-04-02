class Solution {
public:


    void tranverse(vector<vector<int>>& M, int i,int sizem, vector<bool>& visited){
        for(int j=0; j<sizem; j++){
            if(M[i][j]==1 and visited[j]==false){
                visited[j]=true;
                tranverse(M, j, sizem, visited);
            }
        }
    }



    int findCircleNum(vector<vector<int>>& M) {
        int sizem=M.size();
        int counter=0;
        vector<bool> visited(sizem, false);
        for(int i=0;i<sizem;i++){
            if(visited[i]==false){
                visited[i]=true;
                counter++;
                tranverse(M, i, sizem, visited);
            }
        }
        return counter;
    }
};