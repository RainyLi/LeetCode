class Solution {
public:
    int findLUSlength(string a, string b) {
        int sizea=a.size();
        int sizeb=b.size();
        if(sizea ==sizeb){
             if(b.find(a) != string::npos)
                return -1;
             else
                return sizea;
        }
        else if(sizea > sizeb){
            return sizea;
        }
        else{
            return sizeb;
        }
    }
};