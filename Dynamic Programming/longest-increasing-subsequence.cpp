#include <bits/stdc++.h>
using namespace std;

int lis(int arr[], int previous, int currentIndex, int n) {
    if(currentIndex == n) return 0;
    if(arr[currentIndex] > previous) {
        return max(1 + lis(arr, arr[currentIndex], currentIndex + 1, n), lis(arr, previous, currentIndex + 1, n));
    }
    else return lis(arr, previous, currentIndex + 1, n);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i) cin >> arr[i];
        cout << lis(arr, INT_MIN, 0, n) << endl;
    }
}
