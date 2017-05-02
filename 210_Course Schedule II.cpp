#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;


int count(int num) {
    vector<int> dp(2,0);
    vector<int> prime;
    int counter=0;
    for(int i=2;i<num;i++){
        double x=i;
        for(auto p : prime){
             int smallx=x/p;
             if(smallx==x/p){
                 dp.push_back(dp[smallx]+1);
                 counter=counter+dp.back();
                 break;
             }
        }
        if(dp.size()<i){
            dp.push_back(1);
            counter++;
            prime.push_back(i);
        }
    }

    return counter;

}

int main() {
    int res;

    int _num;
    cin >> _num;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    res = count(_num);
    cout << res << endl;

    return 0;

}


