class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<string, string> ab;
        map<string, string> ba;
        
        int sizea=pattern.size();
        int sizeb=str.size();
        
        int j=0;
        for(int i=0;i<sizea;i++){
            string a;
            a.push_back(pattern[i]);
            string b="";
            while(j<sizeb and str[j]!=' '){
                b.push_back(str[j]);
                j++;
            }
            
            cout<<a<<" "<<b<<endl;
            
            if(j==sizeb and i<sizea-1)
                return false;
                
            j++;
                
            bool flaga=(ab.find(a)!=ab.end());
            bool flagb=(ba.find(b)!=ba.end());
            
            if(flaga^flagb)
                return false;
            else if(flaga and flagb){
                if(ab[a]!=b or ba[b]!=a){
                    return false;
                }
            }else{
                ab[a]=b;
                ba[b]=a;
            }
        }
        
        if(j<sizeb){
            return false;
        }
        
        return true;
    }
};