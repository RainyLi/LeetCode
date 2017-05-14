class Solution {
public:
    void count(int i, vector<pair<int, int>>& points, int & ans){
        map<int, int> mymap;
        
        int size=points.size();
        
        for(int p=0;p<size;p++){
            if(p!=i){
                int dis=pow((points[p].first-points[i].first),2)+pow((points[p].second-points[i].second),2);
                mymap[dis]++;
            }
        }
        
        for(auto m:mymap){
            int n=m.second;
            ans=ans+n*(n-1);
        }
    }

    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int size=points.size();
        int ans=0;
        
        for(int i=0;i<size;i++){
            count(i, points, ans);
        }
        
        return ans;
    }
};