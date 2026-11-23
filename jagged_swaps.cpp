#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
       int n;
       cin>>n;
       vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        if(nums[0]==1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}