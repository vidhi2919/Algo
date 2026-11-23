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
        if(find(nums.begin(), nums.end(), k) != nums.end()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}