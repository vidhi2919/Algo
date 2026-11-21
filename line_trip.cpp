#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n, x;
        cin>>n>>x;
        vector<long long> stops(n);
        for (long long j = 0; j < n; j++) {
            cin >> stops[j];
        }

        long long maxi = stops[0];
        for (long long j = 1; j < n; j++) {
            maxi = max(maxi, stops[j] - stops[j - 1]);
        }
        maxi = max(maxi, 2*(x-stops[n-1]));
        cout<<maxi<<endl;
    }
    return 0;
}