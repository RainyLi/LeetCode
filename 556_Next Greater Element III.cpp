class Solution {
public:
    static bool func(int a, int b){
        return a>b;
    }

    int nextGreaterElement(int n) {
        int n0=n;
        int size=0;
        vector<int> num;
        while(n>0){
            num.push_back(n%10);
            n=n/10;
            size++;
        }
        int i;
        for(i=0;i<size;i++){
            int min=-1;
            for(int j=0; j<i; j++){
                //cout<<"i="<<i<<" j="<<j<<" min="<<min<<" "<<endl;
                if((min==-1 and num[j]>num[i]) or ( min!=-1 and num[j]>num[i] and num[min]>=num[j])){
                    min=j;
                    //cout<<"i="<<i<<" min="<<min<<" "<<endl;
                }
            }
            if(min!=-1 and num[min]>num[i]){
                int temp=num[min];
                num[min]=num[i];
                num[i]=temp;
                break;
            }
        }
        
        sort(num.begin(), num.begin()+i, func);
        
        int m=0;
        for(int j=size-1; j>=0; j--){
            m=m*10+num[j];
            //cout<<num[j]<<" "<<endl;
        }
        
        if(m>n0)
            return m;
        else
            return -1;
    }
};