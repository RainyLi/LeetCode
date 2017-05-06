class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int sizea=ransomNote.size();
        int sizeb=magazine.size();
        
        if(sizea>sizeb){
            return false;
        }
        
        vector<int> dic (256,0);
        
        for(auto c:magazine){
            dic[c]++;
        }
        
        for(auto c:ransomNote){
            if(dic[c]<=0)
                return false;
            else
                dic[c]--;
        }
        
        return true;
    }
};