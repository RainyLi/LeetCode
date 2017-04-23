class Solution {
public:
    bool isAnagram(string s, string t) {
        int ls=s.length();
        int lt=t.length();
        //cout<<ls<<" "<<lt;
        if(ls!=lt){
            return false;
        }
        else{
            vector<int> counters (26,0);
            vector<int> countert (26,0);
            
            for(int i=0;i<ls;i++){
                int x=s[i]-'a';
                cout<<"x="<<x<<endl;
                counters[x]=counters[x]+1;
                //cout<<"counters="<<counters[x]<<endl;
            }
            for(int i=0;i<lt;i++){
                int x=t[i]-'a';
                countert[x]=countert[x]+1;;
            }
            
            for(int i=0;i<26;i++){
                //cout<<counters[i]<<" "<<countert[i]<<endl;
                if(counters[i]!=countert[i]){
                    return false;
                }
            }
            return true;
        }
    }
};