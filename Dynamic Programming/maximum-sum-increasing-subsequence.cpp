#include <bits/stdc++.h>
using namespace std;

#define N 1000

int cache[N+10][N+10];

int maxSumSequence(int arr[], int prevIndex, int currentIndex, int n) {
    if(currentIndex == n) return 0;
    if(cache[prevIndex + 1][currentIndex] != -1) return cache[prevIndex + 1][currentIndex];
    if(prevIndex < 0 || arr[currentIndex] > arr[prevIndex]) {
        return cache[prevIndex + 1][currentIndex] = max(arr[currentIndex] + maxSumSequence(arr, currentIndex, currentIndex + 1, n), maxSumSequence(arr, prevIndex, currentIndex + 1, n));
    }
    else return cache[prevIndex + 1][currentIndex] = maxSumSequence(arr, prevIndex, currentIndex + 1, n);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        memset(cache, -1, sizeof(cache));
        for(int i = 0; i < n; ++i) cin >> arr[i];
        cout << maxSumSequence(arr, -1, 0, n) << endl;
    }
}

