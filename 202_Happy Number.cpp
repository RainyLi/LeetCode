class Solution {
public:
    bool isHappy(int n) {
        int x=n;
        set<int> set;
        while(x!=1){
            if(set.find(x)==set.end()){
                set.insert(x);
                string s=to_string(x);
                int size=s.size();
                x=0;
                for(int i=0;i<size;i++){
                    x=x+pow(s[i]-'0',2);
                }
                //cout<<x<<endl;
            }
            else
                return false;
        }
        return true;
    }
};