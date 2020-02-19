#include <bits/stdc++.h>
using namespace std;

int denominations[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};

int cache[1000000];

int findCoins(int change) {
    if(change == 0) return 0;
    if(cache[change] != -1) return cache[change];
    int ans = INT_MAX;
    for(int i = 0; i < 10; ++i) {
        if(change - denominations[i] >= 0) {
            ans = min(ans, 1 + findCoins(change - denominations[i]));
        }
    }
    return cache[change] = ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int change;
        cin >> change;
        memset(cache, -1, sizeof(cache));
        cout << findCoins(change) << endl;
    }
}
