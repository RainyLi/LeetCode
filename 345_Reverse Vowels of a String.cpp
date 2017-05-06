class Solution {
public:
    string reverseVowels(string s) {
        char vowels[10]={'a','e','i','o','u','A','E','I','O','U'};
        set<char> vowelset (vowels, vowels+10);
        
        
        int size=s.size();
        int i=0;
        int j=size-1;
        
        while(i<j){
            while(i<size and vowelset.find(s[i])==vowelset.end()){
                i++;
            }
            while(j>=0 and vowelset.find(s[j])==vowelset.end()){
                j--;
            }
            
            //cout<<i<<" "<<j<<endl;
            if(i<j and i<size and j>=0)
                swap(s[i], s[j]);
            i++;
            j--;
        }
        
        return s;
    }
};