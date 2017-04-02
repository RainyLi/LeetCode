class Solution {
public:

    int findLUSlength2(string a, string b) {
        int sizea=a.size();
        int sizeb=b.size();
        if(sizea >=sizeb){
            return sizea;
        }
        else{
            return sizeb;
        }
    }
    
    int checkEqual(string a, string b){
        int sizea=a.size();
        int sizeb=b.size();
        if(a==b){
            return 3;
        }
        if(sizea>sizeb){
            int i=0;
            int j=0;
            while(i<sizea and j<sizeb){
                if(a[i]!=b[j])
                    i++;
                else{
                    i++;
                    j++;
                }
            }
             
            if(j==sizeb)
            {
                return 2;
            }
            else
                return 0;
        }
        else{
            int i=0;
            int j=0;
            while(i<sizeb and j<sizea){
                if(b[i]!=a[j])
                    i++;
                else{
                    i++;
                    j++;
                }
            }
            if(j==sizea)
            {
                return 1;
            }
            else
                return 0;
        }
        return 0;
    }
    
    int findLUSlength(vector<string>& strs) {
        int size=strs.size();
        vector<bool> mark(size, true);
        int max=-1;
        int ans;
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                int check=checkEqual(strs[i], strs[j]);
                if(check==1){
                    mark[i]=false;
                }
                if(check==2){
                    mark[j]=false;
                }
                if(check==3){
                    mark[i]=false;
                    mark[j]=false;
                }
            }
        }

        for(int i=0;i<size;i++){
            if(mark[i]==false)
                continue;
            int si=strs[i].size();
            if(si>max){
                max=si;
            }
            for(int j=i+1;j<size;j++){
                if(mark[j]==false)
                    continue;
                ans=findLUSlength2(strs[i], strs[j]);
                if(ans==-1){
                    continue;
                }
                else{
                    if(max<ans)
                    {
                        max=ans;
                    }
                }
            }
        }
        return max;
    }
};