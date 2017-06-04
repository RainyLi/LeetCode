class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w=sqrt(area);
        while(area%w){
            w--;
        }
        vector<int> ans;
        ans.push_back(area/w);
        ans.push_back(w);
        return ans;
    }
}