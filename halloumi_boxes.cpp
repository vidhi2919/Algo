// 6 4 2 1
// 10 3 830 14 
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n, k;
        cin>>n>>k;
        vector<long long> nums(n);
        for(int j=0; j<n; j++){
            cin>>nums[j];
        }
        vector<long long> copy_nums = nums;
        sort(copy_nums.begin(), copy_nums.end());
        if(copy_nums==nums || k>1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}