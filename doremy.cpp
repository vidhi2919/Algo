#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
       int n;
       cin>>n;
       unordered_map<int, int> mpp;
       for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mpp[x]++;
       }
       vector<int> v;
       if(mpp.size()>=3){
            cout<<"No"<<endl;
       }else if(mpp.size()==1){
            cout<<"Yes"<<endl;
       }else{
            for(auto i : mpp){
                v.push_back(i.second);
            }
            if(n%2==0){ 
                if(v[0]==v[1]){
                    cout<<"Yes"<<endl;
                }else{
                    cout<<"No"<<endl;
                }
            }else{
                if(abs(v[0]-v[1])==1){
                    cout<<"Yes"<<endl;
                }else{
                    cout<<"No"<<endl;
                }
            }
       }

    }
    return 0;
}