class Solution {
public:
    string reverseWords(string s) {
        int p2=-1;
        int p1;
        int size=s.size();
        while(p2<size){
            p1=p2+1;
            p2=p2+1;
            //cout<<p1<<" "<<p2<<endl;
            while(p2<size and s[p2]!=' '){
                p2=p2+1;
                //cout<<p2<<endl;
            }
            
            int i=p1;
            int j=p2-1;
            while(i<j)
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }
        }
        return s;
    }
};