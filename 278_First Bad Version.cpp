// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=1;
        int j=n;
        while(i<j){//check
            int mid=floor(i+(j-i)/2);
            if(isBadVersion(mid)){
                j=mid;
            }
            else{
                i=mid+1;
            }
        }
        return j;
    }
};