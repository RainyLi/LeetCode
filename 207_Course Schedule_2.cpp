class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        
        vector<set<int>>  matrix(numCourses);
        for(auto p:prerequisites){
            matrix[p.first].insert(p.second);
        }
        
        vector<bool> visited (numCourses, false);
        
        set<int> flag;
        for(int i=0;i<numCourses;i++){
            if(visited[i]==false){
                if(DFS(i, matrix, visited, flag))
                    return false;
            }
        }
        
        return true;
    }
    
    bool DFS(int x, vector<set<int>> &matrix, vector<bool> &visited,set<int> &flag){
        flag.insert(x);
        for(auto end: matrix[x]){
            if(visited[end]==true)
                continue;
            if(flag.find(end)!=flag.end()||DFS(end, matrix, visited, flag))
                return true;
        }
        flag.erase(x);
        visited[x]=true;
        return false;
    }
};