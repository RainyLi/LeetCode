class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sizes=s.size();
        int sizet=t.size();
        if(sizet!=sizes)
            return false;
        map<char, int> maps;
        int counters=0;
        vector<int> s_nums;
        
        map<char, int> mapt;
        int countert=0;
        vector<int> t_nums;
        
        // for string s
        for(int i=0;i<sizes;i++){
            if(maps.find(s[i])!=maps.end()){
                s_nums.push_back(maps[s[i]]);
            }
            else{
                maps[s[i]]=counters;
                s_nums.push_back(maps[s[i]]);
                counters++;
            }
        }
        
        // for string t
        for(int i=0;i<sizet;i++){
            if(mapt.find(t[i])!=mapt.end()){
                t_nums.push_back(mapt[t[i]]);
            }
            else{
                mapt[t[i]]=countert;
                t_nums.push_back(mapt[t[i]]);
                countert++;
            }
        }
        
        for(int i=0;i<sizet;i++){
            cout<<t_nums[i]<<" "<<s_nums[i]<<endl;
            if(t_nums[i]!=s_nums[i])
                return false;
        }
        
        return true;
    }
};