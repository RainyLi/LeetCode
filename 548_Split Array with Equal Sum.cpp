class Solution {
public:
    bool CheckExist(vector<int>& nums, long long count, int start, int end){
        long long count2=0;
        //cout<<"count="<<count<<" start="<<start<<endl;
        for(int i=start+1; i<end-4;i++)
        {
            //if(nums[i]==0)
            //    continue;
            count2=count2+nums[i];
            //cout<<"count2="<<count2<<endl;

            if(count2==count){
                //cout<<"count2="<<count2<<" i="<<i<<endl;
                long long count3=0;
                for(int j=i+2;j<end-2;j++){
                    //if(nums[j]==0)
                    //    continue;
                    count3=count3+nums[j];

                    if(count3==count)
                    {
                        //cout<<"count3="<<count3<<endl;
                        long long count4=0;
                        for(int m=j+2;m<end;m++){
                            //if(nums[m]==0)
                            //    continue;
                            count4=count4+nums[m];
                           
                        }
                        if(count4==count)
                            return true;
                    }
                }
            }
        }
        return false;
    }
    
    bool splitArray(vector<int>& nums) {
        int sizen=nums.size();
        if(sizen<7)
            return false;
        long long count = 0;
        for(int i=0; i<sizen-6;i++){
            if(nums[i]==0)
                continue;
            count=count+nums[i];
            if(CheckExist(nums,count,i+1, sizen))
                return true;
        }
        return false;
    }
};