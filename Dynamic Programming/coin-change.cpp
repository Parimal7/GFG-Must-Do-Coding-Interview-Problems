#include <bits/stdc++.h>
using namespace std;

int cache[305][305];

int makeChange(int change, int arr[], int n) {
    if(change < 0) return 0;
    if(change == 0) return 1;
    if(n <= 0 && change > 0) return 0;
    if(cache[change][n] != -1) return cache[change][n];
    return cache[change][n] = makeChange(change - arr[n-1], arr, n) + makeChange(change, arr, n - 1) ;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int change;
        cin >> change;
        memset(cache, -1, sizeof(cache));
        cout << makeChange(change, arr, n) << endl;
    }
}


