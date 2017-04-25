class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        
        vector<set<int>>  matrix(numCourses);
        for(auto p:prerequisites){
            matrix[p.first].insert(p.second);
        }
        
        vector<int> ingree (numCourses,0);
        
        bool flag=true;
        for(auto start:matrix){
            for(auto end:start){
                ingree[end]++;

            }
        }
        
        while(flag){
            flag=false;
            for(int i=0;i<numCourses;i++){
                if(ingree[i]==0){
                    flag=true;
                    for(auto end:matrix[i])
                        ingree[end]--;
                    ingree[i]=-1;
                }
            }
        }
        
        for(auto i:ingree){
            if(i>0)
                return false;
        }
        
        return true;
    }
};