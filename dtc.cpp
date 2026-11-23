#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
       int n, m;
       cin>>n>>m;
       string x;
       cin>>x;
       string s;
       cin>>s;
       if(x.find(s) != string::npos){
            cout << 0 << endl;
            continue;
       }
       int f = 0;
       for(int i = 0; i<6; i++){
            x = x + x;
            if(x.find(s)!= string::npos){
                cout<<i+1<<endl;
                f = 1;
                break;
            }
       }
       if(f==0){
            cout<< -1<<endl;
       }
    }
    return 0;
}