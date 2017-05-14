class Solution {
public:
     int bitCount(unsigned int n) {
        int counter = 0;
        while(n) {
            counter += n % 2;
            n >>= 1;
        }
        return counter;
    }

    vector<string> readBinaryWatch(int num) {
        vector<vector<int>> hours(5);
        vector<vector<int>> minutes(7);
        vector<string> ans;
        for(int i=0;i<12;i++){
            int x=bitCount(i);
            hours[x].push_back(i);
        }
        
        for(int i=0;i<60;i++){
            int x=bitCount(i);
            minutes[x].push_back(i);
        }
        
        for(int i=0;i<=4;i++){
            if(num<i)
                break;
            int j=num-i;
            if(j>6)
                continue;
            
            for(auto h:hours[i]){
                for(auto m:minutes[j]){
                    string s;
                    
                    s=s+to_string(h)+":";
                    if(m==0){
                        s=s+"00";
                    }
                    else if(m<10){
                        s=s+"0"+to_string(m);
                    }
                    else{
                        s=s+to_string(m);
                    }
                    ans.push_back(s);
                }
                
                
                
            }
            
            
        }
        
        return ans;
    }
};