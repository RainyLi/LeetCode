class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int list[]={1,2,2,1,0,1,1,1,0,1,1,1,2,2,0,0,0,0,1,0,0,2,0,2,0,2};
        vector<string> ans;
        for(auto w:words){
            int size=w.size();
            
            bool flag=true;
            
            for(int j=1;j<size;j++){
                int a=w[j-1];
                int b=w[j];
                
                if(b>='a' and b<='z'){
                    b=list[b-'a'];
                }
                else if(b>='A' and b<='Z'){
                    b=list[b-'A'];
                }
                else{
                    flag=false;
                    break;
                }
                
                if(a>='a' and a<='z'){
                    a=list[a-'a'];
                }
                else if(a>='A' or a<='Z'){
                    a=list[a-'A'];
                }
                else{
                    flag=false;
                    break;
                }
                
                if(a!=b){
                    flag=false;
                    break;
                }
                
            }
            
            if(flag)
                ans.push_back(w);
            
        }
        
        return ans;
    }
};