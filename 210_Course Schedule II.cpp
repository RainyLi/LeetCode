class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<set<int>> matrix(numCourses);
        
        for(auto p:prerequisites){
            matrix[p.second].insert(p.first);
        }
        
        vector<int> inNum (numCourses, 0);
        for(int i;i<numCourses;i++){
            for(auto end:matrix[i]){
                inNum[end]++;
            }
        }
        
        vector<int> ans;
        bool flag=true;
        while(flag){
            flag=false;
            for(int i=0;i<numCourses;i++){
                if(inNum[i]==0){
                    flag=true;
                    ans.push_back(i);
                    for(auto end:matrix[i]){
                        inNum[end]--;
                    }
                    inNum[i]=-1;
                }
            }
        }
        
        if(ans.size()!=numCourses)
            ans.clear();
        return ans;
    }
};