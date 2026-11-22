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
       int f = 0;
       if(n % 3 == 0){
        cout << "Second" << endl;
       }else{
        cout << "First" << endl;
       }
    }
    return 0;
}