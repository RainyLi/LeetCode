class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int height=wall.size();
        if(height<1)
            return 0;
        int num=wall[0].size();
        int width=0;
        for(int i=0;i<num;i++){
            width=width+wall[0][i];
        }
        map<int, int> counter;
        
        for(int i=0;i<height;i++)
        {
            num=wall[i].size();
            int start=0;
            for(int j=0;j<num;j++)
            {
                int x=wall[i][j];
                int end=start+x;
                if(end!=width and counter.find(end)==counter.end())
                    counter[end]=0;
                start=end;
            }
        }
        
        
        
        for(int i=0;i<height;i++)
        {
            num=wall[i].size();
            int start=0;
            auto it=counter.begin();
            for(int j=0;j<num;j++)
            {
                int x=wall[i][j];
                int end=start+x;
                //cout<<start<<" "<<end<<endl;
                while(it!=counter.end()){
                    if((it->first)>start and (it->first)<end)
                        (it->second)++;
                    else if((it->first)>=end)
                        break;
                    it++;
                }
                start=end;
            }
        }
        
        
        auto it=counter.begin();
        int mi=height;
        while(it!=counter.end()){
            mi=min(it->second, mi);
            //cout<<it->second<<" ";
            it++;
        }
        
        return mi;
    }
};