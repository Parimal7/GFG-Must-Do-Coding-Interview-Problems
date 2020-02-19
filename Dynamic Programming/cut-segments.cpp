#include <bits/stdc++.h>
using namespace std;

int cache[4005][4];

int findMaximum(int rodLength, int arr[], int index) {
    if(rodLength == 0) return 0;
    if(rodLength > 0 && index < 0) return INT_MIN;
    if(cache[rodLength][index] != -1) return cache[rodLength][index];
    if(rodLength - arr[index] >= 0) {
        return cache[rodLength][index] = max(1 + findMaximum(rodLength - arr[index], arr, index), findMaximum(rodLength, arr, index - 1));
    }
    else return cache[rodLength][index] = findMaximum(rodLength, arr, index - 1);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int rodLength;
        cin >> rodLength;
        int arr[3];
        memset(cache, -1, sizeof(cache));
        for(int i = 0; i < 3; ++i) cin >> arr[i];
        cout << findMaximum(rodLength, arr, 2) << endl;
    }
}
