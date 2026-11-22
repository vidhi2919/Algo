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
       string s;
       cin>>s;
       if (s.find("...") != string::npos){
        cout << 2 << endl;
       }else{
        cout << count(s.begin(), s.end(), '.') << endl;
       }
    }
    return 0;
}