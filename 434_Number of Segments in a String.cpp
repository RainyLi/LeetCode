class Solution {
public:
    int countSegments(string s) {
        bool flag=false;
        int count=0;
        for(auto c:s){
            if(c==' ' and flag)
            {
                count++;
                flag=false;
            }
            else if(c!=' '){
                flag=true;
            }
        }
        if(flag)
            count++;
        return count;
    }
};