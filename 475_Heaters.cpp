class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        
        int house_size=houses.size();
        int heater_size=heaters.size();
        
        long long ans=0;
        int h=0;
        for(auto house:houses){
            long long dis=-1;
            while(h<heater_size and heaters[h]<house){
                dis=house-heaters[h];
                //cout<<house<<" "<<heaters[h]<<endl;
                h++;
                
            }
            
            if(h<heater_size and heaters[h]>=house){
                if(dis==-1)
                    dis=heaters[h]-house;
                else
                    dis=min(dis, (long long)heaters[h]-house);
                //cout<<house<<" "<<heaters[h]<<endl;
            }
            
            
            
            if(dis>ans){
                ans=dis;
            }
            
            if(h>0)
                h--;
        }
        
        return ans;
    }
};