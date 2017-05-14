class Solution {
public:
    int minDistance(int height, int width, vector<int>& tree, vector<int>& squirrel, vector<vector<int>>& nuts) {
        int dis=0;
        int minNut=height+width;
        // int mdx;
        // int mdy;
        // int msx;
        // int msy;
        for(auto nut:nuts){
            int dx=abs(nut[0]-tree[0]);
            int dy=abs(nut[1]-tree[1]);
            
            dis=dis+2*(dx+dy);
            
            //cout<<dx+dy<<endl;
            
            int sx=abs(nut[0]-squirrel[0]);
            int sy=abs(nut[1]-squirrel[1]);
            
            if(minNut>sx+sy-dx-dy){
                minNut=sx+sy-dx-dy;
            }
        }
        
        dis=dis+minNut;
        //cout<<minNut<<endl;
        return dis;
    }
};