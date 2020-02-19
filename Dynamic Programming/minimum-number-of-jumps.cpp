#include <bits/stdc++.h>
using namespace std;

int cache[10000005];

int findMinSteps(int arr[], int n, int currentIndex) {
    if(currentIndex >= n - 1) return 0;
    if(arr[currentIndex] == 0) return 100000000;
    if(cache[currentIndex] != -1) return cache[currentIndex];
    int ans = INT_MAX;
    for(int i = currentIndex + 1; i <= currentIndex + arr[currentIndex] && i < n; ++i) {
        ans = min(1 + findMinSteps(arr, n, i), ans);
    }
    return cache[currentIndex] = ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        memset(cache, -1, sizeof(cache));
        int arr[n];
        for(int i = 0; i < n; ++i) cin >> arr[i];
        int ans = findMinSteps(arr, n, 0);
        if(ans == 0 || ans == 100000000 ) cout << -1 << endl;
        else cout << ans << endl;
    }
}

