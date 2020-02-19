#include <bits/stdc++.h>
using namespace std;

int cache[105][105];

int findMaxSum(int arr[], int first, int last, bool flag) {
    if(first > last) return 0;
    if(cache[first][last] != -1) return cache[first][last];
    if(flag) {
        return cache[first][last] = max(arr[first] + findMaxSum(arr, first + 1, last, !flag), arr[last] + findMaxSum(arr, first, last - 1, !flag));
    }
    else {
        return cache[first][last] = min(findMaxSum(arr, first + 1, last, !flag), findMaxSum(arr, first, last - 1, !flag));
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i) cin >> arr[i];
        memset(cache, -1, sizeof(cache));
        bool myTurn = true;
        cout << findMaxSum(arr, 0, n-1, myTurn) << endl;
    }
}

