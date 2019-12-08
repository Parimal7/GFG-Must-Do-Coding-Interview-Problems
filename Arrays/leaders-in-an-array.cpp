#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t; 
    while(t--) {
        int n; cin >> n; 
        int arr[n];
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int maxYet = INT_MIN;
        vector<int> sol;
        for(int i = n - 1; i >= 0; --i) {
            if(arr[i] >= maxYet) {
                maxYet = arr[i];
                sol.push_back(maxYet);
            }
        }
        reverse(sol.begin(), sol.end());
        for(auto x: sol) cout << x << " ";
        cout << endl;
    }
}