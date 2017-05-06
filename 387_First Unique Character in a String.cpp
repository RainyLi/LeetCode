class Solution {
public:
    int firstUniqChar(string s) {
        int size=s.size();
        vector<int> counter(26,0);
        for(int i=0;i<size;i++){
            counter[s[i]-'a']++;
        }
		
        for(int i=0;i<size;i++){
            if(counter[s[i]-'a']==1)
                return i;
        }
        
        return -1;
    }
};