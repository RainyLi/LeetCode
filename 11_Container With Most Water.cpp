class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int size=height.size();
        int i=0;
        int j=size-1;
        
        int h=min(height[i], height[j]);
        int m=(j-i)*h;
        
        while(i<j){
            while(height[i]<=h and i<j){
                ++i;
            }
            while(height[j]<=h and i<j){
                --j;
            }
            h=min(height[i], height[j]);
            int con=(j-i)*h;
            
            if(con>m){
                m=con;
            }
        }
        return m;
    }
};