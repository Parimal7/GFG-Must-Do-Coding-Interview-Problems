#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t; 
    while(t--) {
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i) cin >> arr[i];
        int max = INT_MIN, curr = 0;
        for(int i = 0; i < n; ++i) {
            curr += arr[i];
            if(max < curr) max = curr;
            if(curr < 0) curr = 0;
        }
        cout << max << endl;

    }        
}